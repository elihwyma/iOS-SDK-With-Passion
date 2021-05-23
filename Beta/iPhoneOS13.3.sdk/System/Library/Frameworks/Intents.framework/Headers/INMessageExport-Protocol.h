/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INPerson, NSArray, NSDate, NSNumber, NSString;

@protocol INMessageExport <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSDate *dateMessageWasLastRead;
@property (copy, nonatomic) NSNumber *numberOfAttachments;
@property (nonatomic) long long messageType;
@property (nonatomic) long long messageEffectType;

- (unsigned short)init;

@end
