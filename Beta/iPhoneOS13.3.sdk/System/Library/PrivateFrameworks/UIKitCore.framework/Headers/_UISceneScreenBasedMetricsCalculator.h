/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UISceneScreenBasedMetricsCalculator : NSObject

{
    UIWindowScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, setter=_setScene:) UIWindowScene *_scene;

- (void)_updateMetricsOnWindows:(id)arg1 animated:(_Bool)arg2;

@end
