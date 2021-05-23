/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXAVPlayerItemFactory;

@interface SXAVPlayerFactory : NSObject

{
    int _audioMode;
    id <SXAVPlayerItemFactory> _playerItemFactory;
}

@property (nonatomic, readonly) int audioMode;
@property (nonatomic, readonly) id <SXAVPlayerItemFactory> playerItemFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createPlayerWithURL:(id)arg1;
- (id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2;

@end
