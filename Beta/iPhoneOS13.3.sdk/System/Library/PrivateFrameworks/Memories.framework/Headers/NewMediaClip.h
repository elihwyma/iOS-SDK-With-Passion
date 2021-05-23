/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/KenBurnsClip.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NewMediaClip : KenBurnsClip

{
    NSArray *_containedClips;
}

@property (retain, nonatomic) NSArray *containedClips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDuration:(int)arg1;
- (int)maxDuration;
- (_Bool)expandsEditList;
- (id)newMediaAssetVideoPiece;
- (id)initWithKBClip:(id)arg1;

@end
