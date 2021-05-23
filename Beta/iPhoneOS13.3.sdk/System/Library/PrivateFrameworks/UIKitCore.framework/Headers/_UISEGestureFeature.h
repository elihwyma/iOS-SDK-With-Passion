/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@protocol _UISEGestureFeatureDelegate;

__attribute__((visibility("hidden")))
@interface _UISEGestureFeature : NSObject

{
    id <_UISEGestureFeatureDelegate> _delegate;
    unsigned long long _state;
}

@property (weak, nonatomic) id <_UISEGestureFeatureDelegate> delegate;
@property (nonatomic, readonly) unsigned long long state;

- (void)_setState:(unsigned long long)arg1;
- (id)debugDictionary;
- (void)incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;

@end
