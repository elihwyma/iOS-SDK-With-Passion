/*
 Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_xpc_object;

@interface UserFSVolume : NSObject

{
    _Bool _isLocked;
    NSString *_deviceName;
    NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) _Bool isLocked;

+ (id)volumeWithDeviceName:(id)arg1 error:(id *)arg2;
+ (_Bool)prepareToAccessDeviceName:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (_Bool)closeAndReturnError:(id *)arg1;
- (id)initWithDeviceName:(id)arg1 error:(id *)arg2;
- (id)itemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)flushAndReturnError:(id *)arg1;
- (id)rootDirectoryAndReturnError:(id *)arg1;
- (_Bool)deleteFiles:(id)arg1 error:(id *)arg2;

@end
