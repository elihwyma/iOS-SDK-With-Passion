/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaItem;

@interface MPSSLookupResponseTransformContext : NSObject

{
    MPMediaItem *_collectionRepresentativeItem;
}

@property (retain, nonatomic) MPMediaItem *collectionRepresentativeItem;

- (id)initWithCollectionRepresentativeItem:(id)arg1;

@end
