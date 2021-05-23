/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPShape;

__attribute__((visibility("hidden")))
@interface CPZoneBorderNeighbor : NSObject

{
    CPShape *neighborShape;
    int shapeSide;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSuper;
- (id)neighborShape;
- (int)shapeSide;
- (void)setNeighborShape:(id)arg1;
- (void)setShapeSide:(int)arg1;

@end
