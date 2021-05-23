/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMDiagramNodeInfo : NSObject

{
    int mTreeDepth;
    int mRow;
    struct ODIHRange mXRange;
    _Bool mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector *mXRanges;
}

- (id)init;
- (void)dealloc;
- (int)row;
- (void)setRow:(int)arg1;
- (struct ODIHRange)xRange;
- (void)setXRange:(struct ODIHRange)arg1;
- (int)treeDepth;
- (void)setTreeDepth:(int)arg1;
- (_Bool)connectToVerticalSide;
- (void)setConnectToVerticalSide:(_Bool)arg1;
- (int)extraRowsBetweenParentAndSelf;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (float)xOffsetRelativeToParent;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (void)addToXOffsetRelativeToParent:(float)arg1;
- (struct ODIHRangeVector *)xRanges;

@end
