/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@protocol _INPBSearchCallHistoryIntent <Swift>

@property (nonatomic, readonly) int *callCapabilities;
@property (nonatomic, readonly) unsigned long long callCapabilitiesCount;
@property (nonatomic) int callType;
@property (nonatomic) _Bool hasCallType;
@property (nonatomic, readonly) int *callTypes;
@property (nonatomic, readonly) unsigned long long callTypesCount;
@property (nonatomic, readonly) int *capabilities;
@property (nonatomic, readonly) unsigned long long capabilitiesCount;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (nonatomic, readonly) _Bool hasDateCreated;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) _Bool hasPreferredCallProvider;
@property (retain, nonatomic) _INPBContact *recipient;
@property (nonatomic, readonly) _Bool hasRecipient;
@property (retain, nonatomic) _INPBContact *targetContact;
@property (nonatomic, readonly) _Bool hasTargetContact;
@property (nonatomic) _Bool unseen;
@property (nonatomic) _Bool hasUnseen;

- (unsigned short)clearCallCapabilities;
- (unsigned short)addCallCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)callCapabilitiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setCallCapabilities:count: /* Error: Ran out of types for this method. */;
- (unsigned short)callCapabilitiesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCallCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)callTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCallType: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCallTypes;
- (unsigned short)addCallTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)callTypesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setCallTypes:count: /* Error: Ran out of types for this method. */;
- (unsigned short)callTypesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCallTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)clearCapabilities;
- (unsigned short)addCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)capabilitiesAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setCapabilities:count: /* Error: Ran out of types for this method. */;
- (unsigned short)capabilitiesAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsCapabilities: /* Error: Ran out of types for this method. */;
- (unsigned short)preferredCallProviderAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPreferredCallProvider: /* Error: Ran out of types for this method. */;

@end
