/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface CUTDSDevice : NSObject

{
    _Bool _paired;
    NSUUID *_identifier;
    NSData *_bloomFilterData;
    NSData *_deviceAddress;
    unsigned long long _lastSeenTicks;
}

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *bloomFilterData;
@property (copy, nonatomic) NSData *deviceAddress;
@property (nonatomic) unsigned long long lastSeenTicks;
@property (nonatomic) _Bool paired;

- (id)description;

@end
