/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPCharSequence;

__attribute__((visibility("hidden")))
@interface CPZoneMaker : NSObject

{
    CPCharSequence *charactersOnPage;
}

- (void)dealloc;
- (void)makeZonesIn:(id)arg1;
- (unsigned int)categorizeGraphicsIn:(id)arg1;
- (void)mergeQualifyingRectanglesIn:(id)arg1;
- (void)makeZonesWithBoundaryIn:(id)arg1;
- (void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2;
- (void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2;
- (id)newZoneForStraddlersFrom:(id)arg1;
- (void)addObjectsToStraddler:(id)arg1 from:(id)arg2;
- (_Bool)overlap:(id)arg1 with:(id)arg2;

@end
