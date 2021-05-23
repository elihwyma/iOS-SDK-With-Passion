/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIView.h>

@class MCActionButton, MCUIGradientLabel, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MCDetailsHeaderContentView : UIView

{
    UILabel *_displayNameLabel;
    UILabel *_organizationNameLabel;
    MCUIGradientLabel *_trustedLabel;
    UIImageView *_checkmarkView;
    MCActionButton *_actionButton;
    int _headerMode;
    _Bool _isNewPayload;
    _Bool _isTrusted;
    _Bool _isSigned;
    _Bool _isExpired;
    _Bool _hidesUntrustedLabel;
    _Bool _useTrustedNomenclature;
    id _headerDelegate;
}

+ (void)_releaseGradients;
+ (id)_greenGradient;
+ (id)_redGradient;
+ (id)_grayGradient;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)layoutSubviews;
- (id)_scriptingInfo;
- (void)_actionButtonPressed:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setGradientColor:(int)arg1;
- (id)_trustedLabel;
- (void)setIsTrusted:(_Bool)arg1;
- (void)setIsSigned:(_Bool)arg1;
- (void)setHidesUntrustedLabel:(_Bool)arg1;
- (void)setUseTrustedNomenclature:(_Bool)arg1;
- (void)hideActionButton;
- (void)showActionButton;
- (void)setActionToRemove;
- (id)_displayNameLabel;
- (id)_organizationNameLabel;
- (id)_stringForSigned:(_Bool)arg1 andTrusted:(_Bool)arg2;
- (_Bool)_canFitTrustedStringForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;
- (void)setIsExpired:(_Bool)arg1;
- (id)_gradientForSigned:(_Bool)arg1 andTrusted:(_Bool)arg2;
- (void)setActionToInstall;

@end
