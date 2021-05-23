/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class MPMediaItemCollection, MPPlaybackArchive, NSArray;

@interface WFPlayMusicActionContent : NSObject

{
    NSArray *_storeIDs;
    MPMediaItemCollection *_mediaCollection;
    MPPlaybackArchive *_playbackArchive;
}

@property (copy, nonatomic) NSArray *storeIDs;
@property (retain, nonatomic) MPMediaItemCollection *mediaCollection;
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive;

- (id)initWithStoreIDs:(id)arg1;
- (id)initWithMediaCollection:(id)arg1;
- (id)initWithPlaybackArchive:(id)arg1;

@end
