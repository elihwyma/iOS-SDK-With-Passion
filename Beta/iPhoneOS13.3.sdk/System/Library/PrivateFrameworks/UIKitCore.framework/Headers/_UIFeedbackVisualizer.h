/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIFeedbackVisualizer : NSObject

{
    UIWindow *_visualFeedbackWindow;
    NSMapTable *_engineLayers;
}

@property (retain, nonatomic) UIWindow *visualFeedbackWindow;
@property (retain, nonatomic) NSMapTable *engineLayers;

+ (id)sharedVisualizer;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addEngine:(id)arg1;
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;
- (void)cancelVisualForFeedback:(id)arg1;
- (id)_colorForFeedback:(id)arg1;
- (id)_colorForEngine:(id)arg1;
- (id)_monogramForEngine:(id)arg1;
- (id)_colorForEngineState:(long long)arg1;
- (void)_showVisualForFeedback:(id)arg1;
- (void)_updateEngine:(id)arg1;

@end
