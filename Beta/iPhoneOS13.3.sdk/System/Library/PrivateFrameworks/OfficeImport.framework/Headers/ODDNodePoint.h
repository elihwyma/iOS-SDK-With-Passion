/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint

{
    ODDNodePoint *mParent;
    NSMutableArray *mChildren;
    ODDTransitionPoint *mParentTransition;
    ODDTransitionPoint *mSiblingTransition;
}

- (id)parent;
- (void)setType:(int)arg1;
- (id)children;
- (id)siblingTransition;
- (id)parentTransition;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (void)setParentTransition:(id)arg1;
- (void)setSiblingTransition:(id)arg1;

@end
