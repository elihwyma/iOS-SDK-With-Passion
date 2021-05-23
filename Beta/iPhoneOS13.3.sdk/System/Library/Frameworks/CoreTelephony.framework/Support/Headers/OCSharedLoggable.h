/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
 */

#import <Foundation/NSObject.h>

@interface OCSharedLoggable : NSObject

{
    struct queue _queue;
    struct OsLogContext _logContext;
}

@property (nonatomic, getter=getQueue) struct queue queue;
@property (nonatomic, getter=getLogContext) struct OsLogContext logContext;

- (id).cxx_construct;
- (void)executeBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(struct queue)arg1 logContext:(struct OsLogContext)arg2;
- (id)initWithName:(const char *)arg1 qosClass:(unsigned int)arg2 logContext:(struct OsLogContext)arg3;
- (void)executeFunction:(function_445bca8f)arg1;

@end
