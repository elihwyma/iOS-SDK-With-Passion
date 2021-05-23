/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBConfidenceScore;

@protocol _INPBValueMetadata <Swift>

@property (copy, nonatomic) NSString *canonicalValue;
@property (nonatomic, readonly) _Bool hasCanonicalValue;
@property (retain, nonatomic) _INPBConfidenceScore *confidenceScore;
@property (nonatomic, readonly) _Bool hasConfidenceScore;
@property (nonatomic) _Bool confirmed;
@property (nonatomic) _Bool hasConfirmed;
@property (copy, nonatomic) NSString *input;
@property (nonatomic, readonly) _Bool hasInput;
@property (nonatomic, readonly) int *requiredEntitlements;
@property (nonatomic, readonly) unsigned long long requiredEntitlementsCount;
@property (copy, nonatomic) NSString *source;
@property (nonatomic, readonly) _Bool hasSource;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier;
@property (nonatomic, readonly) _Bool hasSourceAppBundleIdentifier;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic, readonly) _Bool hasUuid;

- (unsigned short)clearRequiredEntitlements;
- (unsigned short)addRequiredEntitlement: /* Error: Ran out of types for this method. */;
- (unsigned short)requiredEntitlementAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setRequiredEntitlements:count: /* Error: Ran out of types for this method. */;
- (unsigned short)requiredEntitlementsAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRequiredEntitlements: /* Error: Ran out of types for this method. */;

@end
