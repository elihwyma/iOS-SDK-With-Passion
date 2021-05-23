/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind

{
    MPModelTVSeasonKind *_seasonKind;
}

@property (copy, nonatomic, readonly) MPModelTVSeasonKind *seasonKind;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithSeasonKind:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end
