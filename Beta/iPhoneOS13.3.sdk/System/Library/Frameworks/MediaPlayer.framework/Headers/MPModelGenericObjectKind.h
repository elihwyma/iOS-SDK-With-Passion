/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind

{
    NSDictionary *_relationshipKinds;
}

@property (nonatomic, readonly) NSDictionary *relationshipKinds;

+ (_Bool)supportsSecureCoding;
+ (id)identityKind;
+ (id)kindWithRelationshipKinds:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)humanDescription;

@end
