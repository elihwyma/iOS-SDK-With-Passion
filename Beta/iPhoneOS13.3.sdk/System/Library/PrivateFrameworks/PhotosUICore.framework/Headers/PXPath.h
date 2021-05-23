/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PXPath : NSObject

{
    struct CGPath *_CGPath;
    NSMutableArray *_points;
}

@property (retain, nonatomic) NSMutableArray *points;
@property (retain) struct CGPath *CGPath;

+ (id)pathWithRect:(struct CGRect)arg1;
+ (id)pathWithEllipseInRect:(struct CGRect)arg1;
+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;

- (struct CGRect)boundingRect;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;
- (void)closeSubpath;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(_Bool)arg6 fullRadius:(_Bool)arg7;
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(_Bool)arg4;

@end
