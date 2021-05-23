/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerSettings : _UISettings

{
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
}

@property (copy, nonatomic) NSString *multitaskingGestureMode;
@property (copy, nonatomic) NSString *navigationGestureMode;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;

+ (id)settingsControllerModule;

@end
