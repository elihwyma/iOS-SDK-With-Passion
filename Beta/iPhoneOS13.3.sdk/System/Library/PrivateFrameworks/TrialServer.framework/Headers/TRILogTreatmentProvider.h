/*
 Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

#import <Trial/TRILogTreatmentReader.h>

@interface TRILogTreatmentProvider : TRILogTreatmentReader

- (id)initWithPath:(id)arg1;
- (id)initWithProjectId:(int)arg1;
- (_Bool)addTreatment:(id)arg1;
- (_Bool)saveTreatments:(id)arg1;
- (_Bool)removeTreatment:(struct NSString *)arg1;

@end
