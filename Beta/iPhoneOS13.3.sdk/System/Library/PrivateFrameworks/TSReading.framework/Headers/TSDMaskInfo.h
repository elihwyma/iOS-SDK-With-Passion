/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableInfo.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo

{
    TSDPathSource *mPathSource;
}

@property (retain, nonatomic) TSDPathSource *pathSource;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)setGeometry:(id)arg1;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;

@end
