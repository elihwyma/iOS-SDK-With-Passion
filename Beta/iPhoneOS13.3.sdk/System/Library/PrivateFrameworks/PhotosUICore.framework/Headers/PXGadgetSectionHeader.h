/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PXGadgetSpec, UIFont, UIImage;

@interface PXGadgetSectionHeader : PXObservable

{
    _Bool _isFirstSection;
    _Bool _shouldShowDividerOnFirstSection;
    unsigned long long _headerStyle;
    NSString *_headerTitle;
    NSString *_customButtonTitle;
    unsigned long long _buttonType;
    PXGadgetSpec *_gadgetSpec;
    CDUnknownBlockType _accessoryButtonPressed;
    struct UIEdgeInsets _edgeInsets;
}

@property (copy, nonatomic) CDUnknownBlockType accessoryButtonPressed;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) _Bool shouldShowAccessoryButton;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic, readonly) UIFont *buttonFont;
@property (nonatomic, readonly) UIImage *buttonImage;
@property (nonatomic, readonly) _Bool shouldShowDivider;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic, readonly) double titleHeight;
@property (nonatomic, readonly) double titleTopSpacing;
@property (nonatomic, readonly) double titleBottomSpacing;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic) unsigned long long buttonType;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (nonatomic) _Bool isFirstSection;
@property (nonatomic) _Bool shouldShowDividerOnFirstSection;

+ (id)titleFontForHeaderStyle:(unsigned long long)arg1;
+ (id)buttonFontForButtonType:(unsigned long long)arg1;
+ (id)buttonImageForButtonType:(unsigned long long)arg1;
+ (id)_buttonImageNameForButtonType:(unsigned long long)arg1;

- (void)setHeaderTitle:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationBlock:(CDUnknownBlockType)arg1;
- (id)initWithGadget:(id)arg1;
- (void)performChangesWithGadget:(id)arg1 additionalChanges:(CDUnknownBlockType)arg2;
- (void)_configureWithGadget:(id)arg1;

@end
