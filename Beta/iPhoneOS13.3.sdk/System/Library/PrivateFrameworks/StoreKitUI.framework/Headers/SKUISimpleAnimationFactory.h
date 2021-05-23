/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class CAMediaTimingFunction, NSString;

__attribute__((visibility("hidden")))
@interface SKUISimpleAnimationFactory : NSObject

{
    CAMediaTimingFunction *_timingFunction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)factoryWithTimingFunction:(id)arg1;
+ (id)backOutTimingFunction;
+ (id)easeQuadInTimingFunction;
+ (id)easeQuadInOutTimingFunction;
+ (id)easeQuadOutTimingFunction;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;

@end
