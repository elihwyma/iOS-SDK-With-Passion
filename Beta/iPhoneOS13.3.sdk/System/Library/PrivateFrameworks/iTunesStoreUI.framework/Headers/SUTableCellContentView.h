/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, SUCellConfiguration, UIBezierPath;

@interface SUTableCellContentView : UIView

{
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled:1;
    unsigned int _highlighted:1;
    unsigned int _highlightsOnlyContentView:1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout:1;
}

@property (nonatomic) _Bool usesSubviews;
@property (nonatomic) int clipCorners;
@property (retain, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic, getter=isDeleteConfirmationVisible) _Bool deleteConfirmationVisisble;
@property (nonatomic) _Bool drawAsDisabled;
@property (nonatomic) _Bool highlightsOnlyContentView;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)_clipPath;
- (void)setUsesSubviews:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_reloadSubviewsForConfiguration;
- (void)reloadView;
- (void)_reloadSubviewAlphasAnimated:(_Bool)arg1;
- (void)_updateDisabledStyleForSubviews;
- (void)_stopUsingSubviewLayout;
- (void)_startUsingSubviewLayout;
- (id)_clippedImageForImage:(id)arg1;
- (void)_removeSubviewsForConfiguration;

@end
