/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class MPModelPlaylistEntryKind;

@interface MPModelPlaylistKind : MPModelKind

{
    unsigned long long _variants;
    MPModelPlaylistEntryKind *_playlistEntryKind;
    unsigned long long _options;
}

@property (nonatomic, readonly) unsigned long long variants;
@property (nonatomic, readonly) MPModelPlaylistEntryKind *playlistEntryKind;
@property (nonatomic, readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end
