/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray;

@protocol INSearchForMessagesIntentExport <Swift>

@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSArray *senders;
@property (copy, nonatomic) NSArray *searchTerms;
@property (nonatomic) unsigned long long attributes;
@property (copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSArray *notificationIdentifiers;
@property (copy, nonatomic) NSArray *speakableGroupNames;
@property (copy, nonatomic) NSArray *conversationIdentifiers;

- (unsigned short)init;

@end
