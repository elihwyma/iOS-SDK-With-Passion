/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _PFTask : NSObject

{
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_mutex_t lock;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } condition;
    int isFinishedFlag;
}

+ (int)getNumActiveProcessors;
+ (double)getProcessorSpeed;
+ (unsigned long long)getPhysicalMemory;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)finalize;
- (id)initWithFunction:(CDUnknownFunctionPointerType)arg1 withArgument:(void *)arg2 andPriority:(int)arg3;

@end
