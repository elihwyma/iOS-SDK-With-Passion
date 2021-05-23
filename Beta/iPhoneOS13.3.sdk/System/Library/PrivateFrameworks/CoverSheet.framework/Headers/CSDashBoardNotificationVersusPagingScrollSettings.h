/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardNotificationVersusPagingScrollSettings : PTSettings

{
    _Bool _colorsBackground;
    double _leadingInset;
    double _trailingInset;
}

@property (nonatomic) _Bool colorsBackground;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
