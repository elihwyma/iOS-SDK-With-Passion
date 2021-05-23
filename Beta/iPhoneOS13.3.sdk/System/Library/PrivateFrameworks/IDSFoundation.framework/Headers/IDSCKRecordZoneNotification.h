/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSCKNotification.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZoneNotification : IDSCKNotification

{
    IDSCKRecordZoneID *_recordZoneID;
}

@property (copy, nonatomic, readonly) IDSCKRecordZoneID *recordZoneID;

+ (id)alloc;
+ (Class)__class;

@end
