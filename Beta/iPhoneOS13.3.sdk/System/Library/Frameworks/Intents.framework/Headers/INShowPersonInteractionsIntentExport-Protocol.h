/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INPerson, NSString;

@protocol INShowPersonInteractionsIntentExport <Swift>

@property (copy, nonatomic) INPerson *person;
@property (copy, nonatomic) NSString *focusItemIdentifier;

- (unsigned short)init;

@end
