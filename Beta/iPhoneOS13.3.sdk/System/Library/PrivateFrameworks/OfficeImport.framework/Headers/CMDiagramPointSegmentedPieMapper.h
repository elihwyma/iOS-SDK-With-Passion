/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramPointMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper

{
    double mStartAngle;
    double mStopAngle;
    _Bool mDrawArrows;
    unsigned long long mSegmentIndex;
    unsigned long long mSegmentCount;
}

- (void)setStartAngle:(double)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setDrawArrows:(_Bool)arg1;
- (id)transformPresentationName;
- (void)setStopAngle:(double)arg1;
- (void)setSegmentIndex:(unsigned long long)arg1;
- (id)_arrowFillWithState:(id)arg1;

@end
