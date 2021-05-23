/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDPathManipulation : NSObject

{
    TSDPathManipulation *mPrecedingManipulation;
}

- (void)dealloc;
- (struct CGPath *)manipulatePath:(struct CGPath *)arg1 withLineWidth:(double)arg2;
- (_Bool)canDecomposeRectIntoParts;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingManipulation:(id)arg4;

@end
