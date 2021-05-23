/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface SCROHandler : NSObject

{
    NSLock *_lock;
    _Bool isInvalid;
    id _callbackDelegate;
}

@property (weak, nonatomic) id callbackDelegate;

- (id)init;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(_Bool)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(_Bool)arg2;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(_Bool)arg3;

@end
