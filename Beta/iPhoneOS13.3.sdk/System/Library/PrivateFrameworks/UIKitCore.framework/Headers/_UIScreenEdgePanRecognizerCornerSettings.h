/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISettings.h>

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerCornerSettings : _UISettings

{
    double _cornerSize;
    double _cornerAngleWindow;
}

@property (nonatomic) double cornerSize;
@property (nonatomic) double cornerAngleWindow;
@property (nonatomic) double cornerAngleWindowDegreees;

+ (id)settingsControllerModule;
+ (id)keyPathsForValuesAffectingCornerAngleWindowDegreees;

- (void)setDefaultValues;

@end
