/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSOperation.h>

@interface HDMaintenanceOperation : NSOperation

{
    double _startedTime;
}

+ (id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
