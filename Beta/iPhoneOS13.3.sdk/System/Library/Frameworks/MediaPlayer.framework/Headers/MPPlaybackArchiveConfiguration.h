/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@interface MPPlaybackArchiveConfiguration : NSObject <Swift>

{
    struct CGSize _preferredArtworkSize;
}

@property (nonatomic) struct CGSize preferredArtworkSize;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreferredArtworkSize:(struct CGSize)arg1;

@end
