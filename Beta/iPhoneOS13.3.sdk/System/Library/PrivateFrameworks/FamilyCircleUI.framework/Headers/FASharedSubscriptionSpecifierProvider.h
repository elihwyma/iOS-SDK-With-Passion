/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class ACAccount, FASharedServicesResponse, NSArray, NSOperationQueue, PSListController, PSSpecifier;

@protocol FASharedSubscriptionSpecifierProviderDelegeate;

@interface FASharedSubscriptionSpecifierProvider : NSObject

{
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    _Bool _updateSubsriptionSpecifiers;
    _Bool _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSArray *_specifiers;
    id <FASharedSubscriptionSpecifierProviderDelegeate> _delegate;
}

@property (weak, nonatomic) id <FASharedSubscriptionSpecifierProviderDelegeate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (void)reloadSpecifiers;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;
- (id)_sharedSubscriptionGroupSpecifier;
- (void)_loadSubscriptionServices;
- (id)_valueForServiceSpecifier:(id)arg1;
- (id)_iconURLStringForService:(id)arg1;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (void)_handleSubscriptionListResponse:(id)arg1;

@end
