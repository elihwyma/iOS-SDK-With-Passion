/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSCKRecordID;

@protocol IDSCKRecordKeyValueSetting;

@interface IDSCKRecord : NSObject

{
    IDSCKRecordID *_recordID;
    id <IDSCKRecordKeyValueSetting> _encryptedValuesByKey;
}

@property (copy, nonatomic, readonly) IDSCKRecordID *recordID;
@property (nonatomic, readonly) id <IDSCKRecordKeyValueSetting> encryptedValuesByKey;

+ (id)alloc;
+ (Class)__class;

@end
