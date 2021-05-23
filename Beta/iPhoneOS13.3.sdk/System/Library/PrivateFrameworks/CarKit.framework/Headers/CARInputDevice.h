/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class NSString;

@interface CARInputDevice : NSObject

{
    NSString *_UUID;
    unsigned long long _senderID;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) unsigned long long senderID;

- (void)_setUUID:(id)arg1;
- (void)_setSenderID:(unsigned long long)arg1;
- (id)initWithServiceClient:(struct __IOHIDServiceClient *)arg1 UUID:(id)arg2;

@end
