/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class MPPlaybackArchive;

@interface HFPlaybackArchive : NSObject

{
    MPPlaybackArchive *_mediaPlayerPlaybackArchive;
}

@property (retain, nonatomic) MPPlaybackArchive *mediaPlayerPlaybackArchive;
@property (nonatomic) unsigned long long targetOptions;
@property (nonatomic, readonly) _Bool isShuffleSupported;
@property (nonatomic, readonly) _Bool isRepeatSupported;
@property (nonatomic, getter=isShuffleEnabled) _Bool shuffleEnabled;
@property (nonatomic, getter=isRepeatEnabled) _Bool repeatEnabled;

- (id)initWithMediaPlayerPlaybackArchive:(id)arg1;

@end
