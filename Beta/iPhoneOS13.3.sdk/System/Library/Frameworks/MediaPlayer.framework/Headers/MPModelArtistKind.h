/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class MPModelAlbumKind;

@interface MPModelArtistKind : MPModelKind

{
    MPModelAlbumKind *_albumKind;
}

@property (copy, nonatomic, readonly) MPModelAlbumKind *albumKind;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithAlbumKind:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end
