/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class AAUIDeviceToDeviceEncryptionHelper, NSString;

__attribute__((visibility("hidden")))
@interface CKCloudKitAccountRepairController : NSObject

{
    AAUIDeviceToDeviceEncryptionHelper *_encryptionHelper;
}

@property (retain, nonatomic) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)accountStore;
- (id)authenticationContext;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (id)primaryAppleAccount;
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (Class)authenticationContextClass;
- (id)AKSecurityUpgradeContextMessages;
- (id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;

@end
