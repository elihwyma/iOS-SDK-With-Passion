/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject

{
    SKUIClientContext *_clientContext;
}

- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
- (void)isRestrictionsPasscodeSet:(id)arg1;
- (void)setAllowExplicitContent;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1;
- (_Bool)isRestrictedApp:(id)arg1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1:(id)arg2;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

@end
