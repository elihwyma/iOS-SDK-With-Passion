/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TRITreatmentInfo : NSObject

{
    unsigned int _namespaceId;
    struct NSString *_treatmentId;
    struct NSString *_experimentId;
}

@property unsigned int namespaceId;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSString *experimentId;

+ (id)_treatmentBasePath;
+ (id)baseUrlForTreatment:(struct NSString *)arg1 namespaceId:(unsigned int)arg2;
+ (id)loadInfoForTreatment:(struct NSString *)arg1 namespaceId:(unsigned int)arg2;

- (_Bool)load;
- (id)infoDictionary;
- (id)url;
- (_Bool)save;
- (id)treatmentDirectory;
- (id)urlWithDir:(id)arg1;
- (_Bool)loadFromUrl:(id)arg1;
- (_Bool)saveToUrl:(id)arg1;
- (_Bool)saveToDir:(id)arg1;

@end
