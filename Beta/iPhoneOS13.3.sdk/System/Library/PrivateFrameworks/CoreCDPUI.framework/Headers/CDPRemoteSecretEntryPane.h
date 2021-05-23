/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class CDPDevice, CDPRemoteValidationEscapeOffer, UIButton;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane

{
    UIButton *_footerButton;
    _Bool _remoteAccountRecovery;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
    unsigned long long _remoteSecretType;
    CDPDevice *_device;
}

@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (nonatomic) unsigned long long remoteSecretType;
@property (retain, nonatomic) CDPDevice *device;
@property _Bool remoteAccountRecovery;

- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;

@end
