/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Foundation/NSObject.h>

@class CDPContext, CDPRemoteDeviceSecretValidator;

@protocol CDPRecoveryKeyValidator;

@interface CDPRecoveryKeyEntryViewModel : NSObject

{
    int _mode;
    CDPContext *_context;
    id <CDPRecoveryKeyValidator> _validator;
    CDPRemoteDeviceSecretValidator *_secretValidator;
    _Bool _shouldSuppressCancelButton;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) int mode;
@property _Bool shouldSuppressCancelButton;

- (id)headerTitle;
- (id)placeholderText;
- (void)handleCancel;
- (id)headerSubtitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)recoveryKey;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
