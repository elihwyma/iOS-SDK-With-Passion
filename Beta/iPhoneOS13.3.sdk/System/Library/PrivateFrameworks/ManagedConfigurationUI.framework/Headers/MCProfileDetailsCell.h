/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCProfileInfoCell.h>

__attribute__((visibility("hidden")))
@interface MCProfileDetailsCell : MCProfileInfoCell

{
    unsigned long long _cellStyle;
}

@property (nonatomic) unsigned long long cellStyle;

- (void)prepareForReuse;
- (void)setPayload:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_detailImage;
- (void)setManagedApp:(id)arg1;
- (void)setManagedBook:(id)arg1;
- (id)_textForLabel:(id)arg1 value:(id)arg2;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (_Bool)_containsTitleLabelOnly;
- (void)_setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3 nearExpiration:(_Bool)arg4;
- (id)_combineSubtitleAndApplyAttributeWithSubtitle1:(id)arg1 subtitle2:(id)arg2 font:(id)arg3 defaultColor:(id)arg4 expirationColor:(id)arg5 nearExpiration:(_Bool)arg6;
- (id)_attributedTextForSolitaryTitleLabel:(id)arg1 defaultColor:(id)arg2;
- (void)_setTitle:(id)arg1 subtitle1:(id)arg2 subtitle2:(id)arg3;
- (id)_imageForApplicationIdentifier:(id)arg1;
- (void)_setPayloadInfo:(id)arg1;
- (void)setUnmanagedEnterpriseApp:(id)arg1;
- (void)setPayloadInfo:(id)arg1;

@end
