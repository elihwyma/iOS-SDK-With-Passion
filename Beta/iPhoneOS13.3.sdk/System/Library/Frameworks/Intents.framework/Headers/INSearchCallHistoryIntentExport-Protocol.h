/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber;

@protocol INSearchCallHistoryIntentExport <Swift>

@property (copy, nonatomic) INDateComponentsRange *dateCreated;
@property (copy, nonatomic) INPerson *recipient;
@property (nonatomic) unsigned long long callCapabilities;
@property (nonatomic) unsigned long long callTypes;
@property (nonatomic) long long preferredCallProvider;
@property (copy, nonatomic) NSNumber *unseen;

- (unsigned short)init;

@end
