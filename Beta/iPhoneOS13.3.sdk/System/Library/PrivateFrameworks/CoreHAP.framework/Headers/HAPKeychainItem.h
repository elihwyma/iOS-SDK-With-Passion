/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSDate, NSNumber, NSString;

@interface HAPKeychainItem : HMFObject

{
    _Bool _syncable;
    _Bool _invisible;
    NSString *_accessGroup;
    NSNumber *_type;
    NSString *_label;
    NSString *_itemDescription;
    NSString *_account;
    NSData *_valueData;
    void *_platformReference;
    NSData *_genericData;
    NSString *_viewHint;
    NSDate *_creationDate;
}

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *itemDescription;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSData *valueData;
@property (nonatomic, getter=isSyncable) _Bool syncable;
@property (nonatomic, readonly, getter=isInvisible) _Bool invisible;
@property (nonatomic) void *platformReference;
@property (retain, nonatomic) NSData *genericData;
@property (retain, nonatomic) NSString *viewHint;
@property (retain, nonatomic) NSDate *creationDate;

- (void)dealloc;
- (id)description;
- (id)initWithQueryResult:(struct __CFDictionary *)arg1 shouldIncludeData:(_Bool)arg2;

@end
