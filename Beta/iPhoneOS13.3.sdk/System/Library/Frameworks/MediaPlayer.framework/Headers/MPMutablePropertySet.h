/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPPropertySet.h>

@interface MPMutablePropertySet : MPPropertySet

+ (id)new;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeProperty:(id)arg1;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;
- (void)addProperty:(id)arg1;
- (void)addRelationship:(id)arg1 properties:(id)arg2;
- (void)removeRelationship:(id)arg1;

@end
