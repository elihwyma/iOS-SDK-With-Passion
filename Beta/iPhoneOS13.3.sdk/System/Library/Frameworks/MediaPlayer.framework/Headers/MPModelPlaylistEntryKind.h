/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class NSArray;

@interface MPModelPlaylistEntryKind : MPModelKind

{
    NSArray *_kinds;
}

@property (nonatomic, readonly) NSArray *kinds;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithKinds:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;

@end
