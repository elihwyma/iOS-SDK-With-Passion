/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPSectionedCollection.h>

@interface MPMutableSectionedCollection : MPSectionedCollection

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeAllObjects;
- (void)_initializeAsEmptySectionedCollection;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)removeSectionAtIndex:(long long)arg1;
- (void)moveSectionFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)replaceSectionAtIndex:(long long)arg1 withObject:(id)arg2;
- (void)appendSection:(id)arg1;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)replaceObjectAtIndexPath:(id)arg1 withObject:(id)arg2;
- (void)moveItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;

@end
