/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;

__attribute__((visibility("hidden")))
@interface ODIState : NSObject

{
    ODDDiagram *mDiagram;
    OADOrientedBounds *mDiagramOrientedBounds;
    struct CGRect mLogicalBounds;
    double mScale;
    OADGroup *mGroup;
    NSMutableArray *mPresentationNames;
    NSMutableArray *mDefaultStyleLabelNames;
    int mPointCount;
    int mPointIndex;
    OADShapeStyle *mTextStyle;
    OADDrawingTheme *mDrawingTheme;
}

- (void)setGroup:(id)arg1;
- (double)scale;
- (int)pointCount;
- (id)group;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;
- (void)setPointCount:(int)arg1;
- (int)pointIndex;
- (struct CGRect)logicalBounds;
- (id)diagram;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (id)presentationNameForPointType:(int)arg1;
- (id)drawingTheme;
- (id)defaultStyleLabelNameForPointType:(int)arg1;
- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(_Bool)arg2;
- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;
- (id)diagramOrientedBounds;
- (void)setPointIndex:(int)arg1;
- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;
- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;

@end
