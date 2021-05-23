/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSPerson;

@interface CLSPersonResult : NSObject

{
    float _confidence;
    CLSPerson *_person;
}

@property (retain, nonatomic) CLSPerson *person;
@property (nonatomic) float confidence;

+ (id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2;

- (id)description;
- (void)mergeWithResult:(id)arg1;
- (_Bool)isSamePersonAsResult:(id)arg1;

@end
