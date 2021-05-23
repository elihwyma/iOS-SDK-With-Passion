/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout

- (id)initWithInfo:(id)arg1;
- (_Bool)canFlip;
- (id)movieInfo;
- (int)wrapType;
- (id)layoutGeometryFromInfo;
- (_Bool)shouldDisplayGuides;
- (_Bool)allowsConnections;
- (_Bool)supportsRotation;
- (struct CGRect)alignmentFrame;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;

@end
