/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface CSDispatchGroup : NSObject

{
    NSObject<OS_dispatch_group> *_dispatchGroup;
    int _dispatchGroupCounter;
}

- (id)init;
- (long long)waitWithTimeout:(unsigned long long)arg1;
- (void)leave;
- (void)enter;

@end
