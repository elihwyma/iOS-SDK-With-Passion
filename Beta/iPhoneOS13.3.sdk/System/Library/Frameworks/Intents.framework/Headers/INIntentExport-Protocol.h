/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, PBCodable;

@protocol INIntentExport <Swift>

@property (copy, nonatomic) PBCodable *backingStore;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, readonly) NSString *launchId;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly) NSString *typeName;

+ (unsigned short)intentDescription;
+ (unsigned short)typeName;

- (unsigned short)init;
- (unsigned short)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId: /* Error: Ran out of types for this method. */;
- (unsigned short)trimDataAgainstTCCForAuditToken:bundle: /* Error: Ran out of types for this method. */;

@end
