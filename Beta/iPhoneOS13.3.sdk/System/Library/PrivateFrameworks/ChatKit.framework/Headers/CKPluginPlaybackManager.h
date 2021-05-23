/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol CKPluginPlaybackManagerDelegate;

@interface CKPluginPlaybackManager : NSObject

{
    unsigned long long _currentIndex;
    _Bool _isPlayingBack;
    id <CKPluginPlaybackManagerDelegate> _delegate;
    NSMutableArray *__pluginItems;
}

@property (retain, nonatomic, setter=_setPluginItems:) NSMutableArray *_pluginItems;
@property (nonatomic, setter=_setPlayingBack:) _Bool isPlayingBack;
@property (weak, nonatomic) id <CKPluginPlaybackManagerDelegate> delegate;

- (void)dealloc;
- (void)_cleanup;
- (void)startPlayback;
- (void)stopPlayback;
- (id)initWithPluginItems:(id)arg1;
- (void)addPluginItem:(id)arg1;

@end
