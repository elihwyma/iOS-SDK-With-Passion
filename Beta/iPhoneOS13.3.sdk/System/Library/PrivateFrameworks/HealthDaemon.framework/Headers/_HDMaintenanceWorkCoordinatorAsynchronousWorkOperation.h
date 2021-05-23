/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDMaintenanceOperation.h>

@interface _HDMaintenanceWorkCoordinatorAsynchronousWorkOperation : HDMaintenanceOperation

{
    CDUnknownBlockType _operationBlock;
    _Bool executing;
    _Bool finished;
}

@property (getter=isExecuting) _Bool executing;
@property (getter=isFinished) _Bool finished;

- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithName:(id)arg1 operationBlock:(CDUnknownBlockType)arg2;

@end
