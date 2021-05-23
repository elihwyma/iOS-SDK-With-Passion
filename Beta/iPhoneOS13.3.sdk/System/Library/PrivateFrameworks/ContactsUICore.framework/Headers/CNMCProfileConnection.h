/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@interface CNMCProfileConnection : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
- (_Bool)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
- (id)observableForManagedConfigChanged;

@end
