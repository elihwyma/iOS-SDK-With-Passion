/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@interface MPModelMovieKind : MPModelKind

{
    unsigned long long _variants;
    unsigned long long _options;
}

@property (nonatomic, readonly) unsigned long long variants;
@property (nonatomic, readonly) unsigned long long options;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end
