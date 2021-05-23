/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MovieClip.h>

@class NSArray, NSMutableDictionary, NSString, PVEffect;

__attribute__((visibility("hidden")))
@interface MultiUpClip : MovieClip

{
    int _type;
    PVEffect *_multiUpEffect;
    NSMutableDictionary *_multiUpEffectSettings;
    NSArray *_containedClips;
    NSString *_sequentialEffectID;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSArray *containedClips;
@property (nonatomic, readonly) PVEffect *multiUpEffect;
@property (retain, nonatomic) NSMutableDictionary *multiUpEffectSettings;
@property (retain, nonatomic) NSString *sequentialEffectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDuration:(int)arg1;
- (void)setStartOffset:(int)arg1;
- (int)maxDuration;
- (id)movie;
- (id)initWithClip:(id)arg1;
- (id)speedRanges;
- (_Bool)isMultiUp;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;
- (_Bool)expandsEditList;

@end
