/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBStartAudioCallIntent <Swift>

@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (nonatomic) int destinationType;
@property (nonatomic) _Bool hasDestinationType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (nonatomic) _Bool hasPreferredCallProvider;
@property (nonatomic) int recordTypeForRedialing;
@property (nonatomic) _Bool hasRecordTypeForRedialing;
@property (copy, nonatomic) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;
@property (nonatomic) _Bool hasTtyType;

+ (unsigned short)contactType;
+ (unsigned short)targetContactsType;

- (unsigned short)destinationTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsDestinationType: /* Error: Ran out of types for this method. */;
- (unsigned short)addContact: /* Error: Ran out of types for this method. */;
- (unsigned short)audioRouteAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAudioRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)clearContacts;
- (unsigned short)contactAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTargetContacts;
- (unsigned short)addTargetContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)targetContactsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)preferredCallProviderAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPreferredCallProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)recordTypeForRedialingAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsRecordTypeForRedialing: /* Error: Ran out of types for this method. */;
- (unsigned short)ttyTypeAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsTTYType: /* Error: Ran out of types for this method. */;

@end
