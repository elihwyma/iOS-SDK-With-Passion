/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@interface SXMosaicGalleryColumnLayout : NSObject

{
    double _width;
    double _gutter;
}

@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double gutter;

- (double)widthForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionForColumnRange:(struct _NSRange)arg1 numberOfColumns:(unsigned long long)arg2;
- (double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2;
- (id)initWithWidth:(double)arg1 gutter:(double)arg2;

@end
