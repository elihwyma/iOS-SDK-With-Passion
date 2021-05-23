/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSArray, safeArrayBound;

@interface vtSafeArray : NSObject

{
    unsigned short _cDims;
    unsigned short _fFeatures;
    unsigned int _cbElementSize;
    safeArrayBound *_rgsBoundArr;
    NSArray *_vData;
}

@property unsigned short cDims;
@property unsigned short fFeatures;
@property unsigned int cbElementSize;
@property (retain) safeArrayBound *rgsBoundArr;
@property (retain) NSArray *vData;

- (id)initWithArray:(id)arg1 ElementSize:(unsigned int)arg2;

@end
