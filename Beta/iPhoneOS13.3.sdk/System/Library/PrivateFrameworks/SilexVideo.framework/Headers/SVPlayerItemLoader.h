/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, NFStateMachine, NSError, NSMutableArray, NSString;

@protocol SVPlayerItemFactory, SVURLAssetLoading, SVVideoMetadata;

@interface SVPlayerItemLoader : NSObject

{
    id <SVPlayerItemFactory> _playerItemFactory;
    id <SVURLAssetLoading> _URLAssetLoader;
    id <SVVideoMetadata> _metadata;
    NFStateMachine *_stateMachine;
    NSMutableArray *_loadingStateChangeBlocks;
    unsigned long long _state;
    AVPlayerItem *_item;
    NSError *_error;
    CDUnknownBlockType _cancellationBlock;
}

@property (nonatomic, readonly) id <SVPlayerItemFactory> playerItemFactory;
@property (nonatomic, readonly) id <SVURLAssetLoading> URLAssetLoader;
@property (nonatomic, readonly) id <SVVideoMetadata> metadata;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (nonatomic, readonly) NSMutableArray *loadingStateChangeBlocks;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AVPlayerItem *item;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) CDUnknownBlockType cancellationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)load;
- (void)loadPlayerItemWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onLoadingStateChange:(CDUnknownBlockType)arg1;
- (id)initWithPlayerItemFactory:(id)arg1 URLAssetLoader:(id)arg2 metadata:(id)arg3;

@end
