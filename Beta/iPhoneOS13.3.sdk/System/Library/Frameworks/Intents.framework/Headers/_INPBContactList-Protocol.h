/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBCondition;

@protocol _INPBContactList <Swift>

@property (retain, nonatomic) _INPBCondition *condition;
@property (nonatomic, readonly) _Bool hasCondition;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;

+ (unsigned short)contactType;

- (unsigned short)addContact: /* Error: Ran out of types for this method. */;
- (unsigned short)clearContacts;
- (unsigned short)contactAtIndex: /* Error: Ran out of types for this method. */;

@end
