/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TSDContentAnimation : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animation;

- (void)i_applyToLayer:(id)arg1 withTransformBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)i_canProduceAnimation;
- (id)i_endLocation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;

@end
