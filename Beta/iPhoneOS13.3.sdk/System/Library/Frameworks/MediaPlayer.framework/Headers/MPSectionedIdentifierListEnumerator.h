/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSEnumerator.h>

@class MPSectionedIdentifierList, NSMutableArray;

@interface MPSectionedIdentifierListEnumerator : NSEnumerator

{
    MPSectionedIdentifierList *_sectionedIdentifierList;
    unsigned long long _options;
    NSMutableArray *_contexts;
    NSMutableArray *_nextEmittableEnumerationResults;
}

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSMutableArray *contexts;
@property (retain, nonatomic) NSMutableArray *nextEmittableEnumerationResults;
@property (nonatomic, readonly) MPSectionedIdentifierList *sectionedIdentifierList;

- (id)nextObject;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 withExclusiveAccessToken:(id)arg3;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4 withExclusiveAccessToken:(id)arg5;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtTailOfSection:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)nextObjectWithExclusiveAccessToken:(id)arg1;

@end
