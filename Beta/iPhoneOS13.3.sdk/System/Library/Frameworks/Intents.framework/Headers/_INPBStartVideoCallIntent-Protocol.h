/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBIntentMetadata;

@protocol _INPBStartVideoCallIntent <Swift>

@property (nonatomic) int audioRoute;
@property (nonatomic) _Bool hasAudioRoute;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (copy, nonatomic) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;

+ (unsigned short)contactType;
+ (unsigned short)targetContactsType;

- (unsigned short)addContact: /* Error: Ran out of types for this method. */;
- (unsigned short)audioRouteAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsAudioRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)clearContacts;
- (unsigned short)contactAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearTargetContacts;
- (unsigned short)addTargetContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)targetContactsAtIndex: /* Error: Ran out of types for this method. */;

@end
