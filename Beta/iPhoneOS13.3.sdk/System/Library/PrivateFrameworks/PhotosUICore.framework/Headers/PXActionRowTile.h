/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXUIWidgetFooterView, UIButton;

@protocol PXActionRowTileDelegate;

@interface PXActionRowTile : UIView <Swift>

{
    NSString *_title;
    long long _idiom;
    id <PXActionRowTileDelegate> _delegate;
    UIButton *__button;
    PXUIWidgetFooterView *__footer;
}

@property (nonatomic, readonly) UIButton *_button;
@property (nonatomic, readonly) PXUIWidgetFooterView *_footer;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) long long idiom;
@property (weak, nonatomic) id <PXActionRowTileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *view;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)becomeReusable;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;
- (void)_setupButton;
- (void)_setupDecoratedButton;
- (void)_updateButtonTitle;
- (void)handleButtonTap:(id)arg1 forEvent:(id)arg2;

@end
