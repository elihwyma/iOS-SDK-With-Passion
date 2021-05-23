/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject

{
    ACAccountStore *_accountStore;
}

@property (nonatomic, readonly) PKAppleAccountInformation *appleAccountInformation;
@property (nonatomic, readonly) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
