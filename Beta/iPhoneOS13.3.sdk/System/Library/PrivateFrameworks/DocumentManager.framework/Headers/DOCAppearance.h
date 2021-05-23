/*
 Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface DOCAppearance : NSObject

{
    NSString *_collectionCreateButtonTitle;
    _Bool _showsCreateButton;
    _Bool _shouldShowFileExtensions;
    _Bool _forceClearBackground;
    _Bool _alwaysEnableScrollInSourceView;
    double _compactHorizontalTableStackSpacing;
    double _regularHorizontalTableStackSpacing;
    double _fullHorizontalTableStackSpacing;
    UIColor *_largeTitleColor;
    UIColor *_backgroundTintColor;
    unsigned long long _browserUserInterfaceStyle;
    double _createButtonAspectRatio;
}

@property (readonly) UIColor *backgroundColor;
@property (nonatomic) double compactHorizontalTableStackSpacing;
@property (nonatomic) double regularHorizontalTableStackSpacing;
@property (nonatomic) double fullHorizontalTableStackSpacing;
@property (retain, nonatomic) UIColor *largeTitleColor;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (nonatomic) _Bool showsCreateButton;
@property (nonatomic) _Bool shouldShowFileExtensions;
@property (nonatomic) _Bool forceClearBackground;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic) double createButtonAspectRatio;
@property (retain, nonatomic) NSString *collectionCreateButtonTitle;
@property _Bool alwaysEnableScrollInSourceView;

+ (_Bool)supportsSecureCoding;
+ (id)documentsPickerAppearance;
+ (id)recentsPopoverAppearance;
+ (id)recentsWidgetAppearance;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
