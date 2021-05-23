/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIProgressiveBlurPresentationAnimationFactory : NSObject

{
    unsigned long long _curve;
}

@property (nonatomic, readonly) unsigned long long curve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (id)initWithCurve:(unsigned long long)arg1;

@end
