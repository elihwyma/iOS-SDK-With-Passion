/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface _HDDatabasePendingWriteRecord : NSObject

{
    CDUnknownBlockType _writeBlock;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType writeBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;

- (id)init;
- (id)initWithWriteBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
