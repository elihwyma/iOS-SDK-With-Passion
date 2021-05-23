/*
 Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

#import <RunningBoard/RBInheritanceCollection.h>

@class NSCountedSet;

@interface RBMutableInheritanceCollection : RBInheritanceCollection

{
    NSCountedSet *_countedNamespaces;
}

+ (id)collectionWithInheritances:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allNamespaces;
- (void)unionCollection:(id)arg1;
- (void)addInheritance:(id)arg1;
- (void)removeInheritance:(id)arg1;
- (id)_initWithCollection:(id)arg1;

@end
