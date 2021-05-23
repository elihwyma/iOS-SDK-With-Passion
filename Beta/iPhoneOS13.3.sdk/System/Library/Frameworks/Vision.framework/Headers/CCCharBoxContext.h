/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CCCharBoxContext : NSObject

{
    unsigned short medianHeightTop;
    unsigned short medianHeightBottom;
    short loopBigBox;
    short loopBigBoxPrev;
    unsigned short filterWalkUpDownCount;
    unsigned int allocationSize;
    float mTop;
    float mBottom;
    float bTop;
    float bBottom;
    float posUL;
    float posLL;
    float posUR;
    float posLR;
    float *floatVectorSumProd;
    char *pulseVectorHeightCharBox;
    char *pulseVectorHeightCharBoxAdaptive;
    unsigned long long *charBoxFlags;
    unsigned short *charboxROIFullVectorRowStart;
    unsigned short *charboxROIFullVectorHeight2;
}

@property float *floatVectorSumProd;
@property char *pulseVectorHeightCharBox;
@property char *pulseVectorHeightCharBoxAdaptive;
@property unsigned long long *charBoxFlags;
@property unsigned short *charboxROIFullVectorRowStart;
@property unsigned short *charboxROIFullVectorHeight2;
@property unsigned int allocationSize;
@property float mTop;
@property float mBottom;
@property float bTop;
@property float bBottom;
@property float posUL;
@property float posLL;
@property float posUR;
@property float posLR;
@property unsigned short medianHeightTop;
@property unsigned short medianHeightBottom;
@property short loopBigBox;
@property short loopBigBoxPrev;
@property unsigned short filterWalkUpDownCount;

- (void)dealloc;
- (void)setFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)clearFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)checkFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)copyFlagValue:(unsigned long long)arg1 toTarget:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (void)resetBoxBounds;
- (_Bool)makeAllocationsForWidth:(unsigned long long)arg1;
- (void)releaseAllocations;

@end
