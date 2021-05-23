/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, REMObjectID;

@interface REMAuxiliaryChangeInfoType : NSObject

{
    REMObjectID *remObjectID;
    NSDictionary *_storage;
}

@property (retain, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) NSDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithREMObjectID:(id)arg1;

@end
