/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCCommunicationServiceRulesUtilities : NSObject

+ (id)validatedCommunicationServiceRules:(id)arg1 outError:(id *)arg2;
+ (id)restrictionsForValidatedCommunicationServiceRules:(id)arg1;
+ (id)validServiceTypes;
+ (id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;

@end
