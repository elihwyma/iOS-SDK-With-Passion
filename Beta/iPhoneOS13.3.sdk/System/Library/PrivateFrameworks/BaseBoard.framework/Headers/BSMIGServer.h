/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BSMIGServer : NSObject

{
    NSString *_portName;
    unsigned int _port;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_thread;
    struct mig_subsystem *_subsystem;
    struct __CFRunLoopObserver *_entryObserver;
    struct __CFRunLoopObserver *_exitObserver;
}

@property (nonatomic) int threadPriority;
@property (copy, nonatomic, readonly) NSString *threadName;

- (id)init;
- (unsigned int)port;
- (void *)_start;
- (void)setThreadName:(id)arg1;
- (unsigned int)_createPortNamed:(id)arg1;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString *)arg1;
- (id)initWithPortName:(id)arg1 subsystem:(struct mig_subsystem *)arg2 separateThread:(_Bool)arg3;

@end
