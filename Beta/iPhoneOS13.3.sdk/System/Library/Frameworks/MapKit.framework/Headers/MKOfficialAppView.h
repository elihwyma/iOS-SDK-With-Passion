/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, SSLookupItem, UIButton, UIImage, UIImageView, UIView, _MKUILabel;

@protocol MKOfficialAppViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOfficialAppView : MKPlaceSectionRowView

{
    UIImageView *_storeAppImageView;
    UIView *_labelContainerView;
    _MKUILabel *_appNameLabel;
    _MKUILabel *_descriptionLabel;
    UIButton *_punchOutButton;
    NSMutableArray *_constraintArray;
    _Bool _layoutShouldStack;
    _Bool _isAppInstalled;
    SSLookupItem *_storeItem;
    UIImage *_storeItemImage;
    id <MKOfficialAppViewDelegate> _delegate;
}

@property (retain, nonatomic) SSLookupItem *storeItem;
@property (retain, nonatomic) UIImage *storeItemImage;
@property (weak, nonatomic) id <MKOfficialAppViewDelegate> delegate;
@property (nonatomic) _Bool isAppInstalled;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_createConstraints;
- (void)_updateFonts;
- (void)infoCardThemeChanged;
- (void)_updateShouldLayoutStack;
- (void)_punchOutButtonSelected:(id)arg1;
- (void)_contentSizeDidChangeNotificationHandler;
- (void)updateButtonText;
- (void)_updateLabelText;

@end
