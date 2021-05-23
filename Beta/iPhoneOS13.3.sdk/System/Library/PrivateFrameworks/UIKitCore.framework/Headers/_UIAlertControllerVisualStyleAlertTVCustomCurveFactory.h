/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerVisualStyleAlertTVCustomCurveFactory : NSObject

{
    unsigned long long _curve;
}

@property (nonatomic) unsigned long long curve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCustomCurve:(unsigned long long)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;

@end
