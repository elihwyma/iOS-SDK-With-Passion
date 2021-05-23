/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

@interface EDConversationInfo : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *conversationUUID;
@property (copy, nonatomic) NSDate *lastModified;
@property (copy, nonatomic) NSString *messageIds;
@property (nonatomic) _Bool notifyMe;
@property (nonatomic) _Bool muted;

+ (id)fetchRequest;

@end
