/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardQuickActionsButtonSettings : PTSettings

{
    _Bool _showsButtons;
    _Bool _colorsBackground;
    double _topOutset;
    double _leadingOutset;
    double _trailingOutset;
    double _bottomOutset;
}

@property (nonatomic) _Bool showsButtons;
@property (nonatomic) _Bool colorsBackground;
@property (nonatomic) double topOutset;
@property (nonatomic) double leadingOutset;
@property (nonatomic) double trailingOutset;
@property (nonatomic) double bottomOutset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
