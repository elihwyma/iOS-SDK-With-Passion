/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@protocol MPAVErrorResolverDelegate;

@interface MPAVErrorResolver : NSObject

{
    id <MPAVErrorResolverDelegate> _delegate;
}

@property (weak, nonatomic) id <MPAVErrorResolverDelegate> delegate;

- (void)resolveError:(id)arg1;
- (void)sendDidResolveError:(id)arg1 withResolution:(long long)arg2;

@end
