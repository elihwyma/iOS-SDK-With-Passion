/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXMotion : NSObject

{
    _Bool _stationary;
    long long _motiontype;
}

@property (nonatomic, readonly) long long motiontype;
@property (nonatomic, readonly) _Bool stationary;

+ (id)getMotionStringFromMotionType:(long long)arg1;
+ (long long)_getMotionTypeFromCMMotionActivity:(id)arg1;
+ (id)_getMotionStringFromCMMotionActivity:(id)arg1;
+ (id)summarizeActivityStream:(id)arg1;
+ (id)findMostCommonAndRecent:(id)arg1 identityFunc:(CDUnknownBlockType)arg2;

- (id)print;
- (id)initFromCMMotionActivity:(id)arg1;
- (id)initWithMotionType:(long long)arg1 andStationary:(_Bool)arg2;
- (id)getMotionString;

@end
