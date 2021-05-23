/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSProgress.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface _NSProgressWithRemoteParent : NSProgress

{
    NSXPCConnection *_parentConnection;
    unsigned long long _sequence;
}

@property (retain) NSXPCConnection *parentConnection;
@property unsigned long long sequence;

- (void)dealloc;
- (void)_updateFractionCompleted:(struct _NSProgressFractionTuple)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(_Bool)arg3;

@end
