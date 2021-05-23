/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol NSCopying;

@interface MPTiledArtworkRepresentationToken : NSObject

{
    id <NSCopying> _revisionIdentifier;
    NSArray *_tileArtworkVisualIdenticalityIdentifiers;
}

@property (copy, nonatomic) id <NSCopying> revisionIdentifier;
@property (copy, nonatomic) NSArray *tileArtworkVisualIdenticalityIdentifiers;

@end
