/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataOriginProvenance, HDProfile;

@interface HDDataEntityInsertionContext : NSObject

{
    HDProfile *_profile;
    double _defaultCreationDate;
    _Bool _skipInsertionFilter;
    HDDataOriginProvenance *_provenance;
    double _creationDate;
}

@property (nonatomic, readonly) HDDataOriginProvenance *provenance;
@property (nonatomic, readonly) double creationDate;
@property (nonatomic, readonly) _Bool skipInsertionFilter;

- (void)prepareObjectForInsertion:(id)arg1;
- (id)initWithProvenance:(id)arg1 creationDate:(double)arg2 skipInsertionFilter:(_Bool)arg3 profile:(id)arg4;

@end
