/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class AAGrandSlamSigner, AIDAAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject

{
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

- (id)init;
- (id)_accountStore;
- (id)_appleAccount;
- (id)_grandSlamSigner;
- (id)initWithAccountManager:(id)arg1;
- (void)requestFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;

@end
