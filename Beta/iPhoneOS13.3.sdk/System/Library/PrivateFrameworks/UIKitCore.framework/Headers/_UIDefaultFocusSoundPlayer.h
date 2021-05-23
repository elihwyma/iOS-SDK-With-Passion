/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDefaultFocusSoundPlayer : NSObject

{
    NSMutableDictionary *_urlPools;
    NSMutableDictionary *_focusSoundPools;
    NSObject<OS_dispatch_queue> *_soundQueue;
}

@property (retain, nonatomic) NSMutableDictionary *urlPools;
@property (retain, nonatomic) NSMutableDictionary *focusSoundPools;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)playSoundWithFocusSound:(long long)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)playSoundWithURL:(id)arg1 volume:(double)arg2 pan:(double)arg3;
- (void)_playSystemSound:(unsigned int)arg1 withVolume:(double)arg2 pan:(double)arg3;

@end
