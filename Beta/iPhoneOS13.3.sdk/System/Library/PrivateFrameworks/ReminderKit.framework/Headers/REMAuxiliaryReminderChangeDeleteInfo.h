/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAuxiliaryChangeInfoType.h>

@class NSString;

@interface REMAuxiliaryReminderChangeDeleteInfo : REMAuxiliaryChangeInfoType

@property (nonatomic, readonly) NSString *reminderIdentifier;
@property (nonatomic, readonly) NSString *oldListIdentifier;
@property (nonatomic, readonly) NSString *oldExternalIdentifier;

+ (id)cdEntityName;

@end
