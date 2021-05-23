/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject

{
    NSLock *_lock;
    _Bool _sessionPrompt;
}

@property _Bool sessionPrompt;

+ (id)coordinator;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (id)_init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)markPrompt;
- (_Bool)didPrompt;

@end
