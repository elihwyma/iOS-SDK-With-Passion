/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCriticalTimer : NSObject

{
    CDUnknownBlockType _userCallback;
    unsigned int _timerPort;
    struct __CFMachPort *_cfPort;
}

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)completionHandler;
- (void)start:(double)arg1 withCallback:(CDUnknownBlockType)arg2;

@end
