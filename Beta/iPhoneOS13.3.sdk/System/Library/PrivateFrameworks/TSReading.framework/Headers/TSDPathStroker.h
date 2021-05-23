/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSUColor;

@interface TSDPathStroker : NSObject

{
    TSUColor *mColor;
    double mWidth;
    TSDPathStroker *mPrecedingStroker;
}

@property (nonatomic) double width;

- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingStroker:(id)arg4;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inColor:(id)arg3;

@end
