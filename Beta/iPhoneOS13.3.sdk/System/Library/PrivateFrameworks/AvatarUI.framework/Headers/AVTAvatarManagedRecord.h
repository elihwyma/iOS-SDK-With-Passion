/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSUUID;

@interface AVTAvatarManagedRecord : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *avatarData;
@property (retain, nonatomic) NSDate *orderDate;

@end
