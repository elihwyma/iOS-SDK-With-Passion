/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UISettings.h>

@class SBAttentionAwarenessSettings, SBProximitySettings, SBStatusBarStyleOverridesSettings;

@interface SBRootSettings : _UISettings

{
    SBStatusBarStyleOverridesSettings *_statusBarStyleOverridesSettings;
    SBAttentionAwarenessSettings *_attentionAwarenessSettings;
    SBProximitySettings *_proximitySettings;
}

@property (retain) SBStatusBarStyleOverridesSettings *statusBarStyleOverridesSettings;
@property (retain) SBAttentionAwarenessSettings *attentionAwarenessSettings;
@property (retain) SBProximitySettings *proximitySettings;

@end
