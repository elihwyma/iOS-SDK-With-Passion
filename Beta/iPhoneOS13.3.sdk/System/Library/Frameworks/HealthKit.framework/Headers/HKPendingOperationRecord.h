/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKPendingOperationRecord : NSObject

{
    CDUnknownBlockType _operationHandler;
    CDUnknownBlockType _completionHandler;
    long long _errorCount;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType operationHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) long long errorCount;

+ (id)pendingOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
