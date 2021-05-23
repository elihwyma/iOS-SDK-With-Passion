/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MiroAnalysisTitleColorFinder : NSObject

{
    int _height;
    int _width;
    int _heightOrg;
    int _widthOrg;
    char *_binIndexMap;
    float *_imageDataHSV;
    int _bpr;
    float _fv[36];
    struct vector<int, std::__1::allocator<int>> _dominantColorIndex;
    struct vector<int, std::__1::allocator<int>> _popupColorIndex;
    NSMutableArray *_dominantColor;
    NSMutableArray *_popupColor;
    int _startHeight;
    int _endHeight;
    int _startWidth;
    int _endWidth;
    int _photoType;
    struct CGRect _ROI;
    struct CGAffineTransform _transformFromOrientation;
    struct CGSize _UIImageSize;
}

@property (nonatomic, readonly) struct CGRect nativeImageBounds;
@property (copy, nonatomic, readonly) NSArray *dominantColors;
@property (copy, nonatomic, readonly) NSArray *popupColors;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_commonInit;
- (void)setRegionOfInterest:(struct CGRect)arg1;
- (void)buildModel:(struct CGImage *)arg1;
- (id)initWithUIImage:(id)arg1;
- (void)analyzeUIImage:(id)arg1;
- (void)analyzeCGImage:(struct CGImage *)arg1 orientation:(long long)arg2;
- (void)rgb2hsv:(float)arg1 g:(float)arg2 b:(float)arg3 h:(float *)arg4 s:(float *)arg5 v:(float *)arg6;
- (void)mappingROI;
- (void)findDominantPopupColor:(float *)arg1;
- (void)findColorHSV;
- (void)findPeaks:(float *)arg1 startIndex:(int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(long long)arg2;

@end
