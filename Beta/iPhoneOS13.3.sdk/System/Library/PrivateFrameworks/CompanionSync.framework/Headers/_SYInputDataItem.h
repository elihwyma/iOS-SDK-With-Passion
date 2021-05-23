/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableData;

@interface _SYInputDataItem : NSObject

{
    struct os_unfair_lock_s _lock;
    unsigned long long _length;
    NSMutableData *_data;
    CDUnknownBlockType _callback;
}

@property (nonatomic) struct os_unfair_lock_s lock;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) unsigned long long lengthRemaining;
@property (nonatomic, readonly) NSMutableData *data;
@property (copy, nonatomic) CDUnknownBlockType callback;

- (id)initWithLength:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;

@end
