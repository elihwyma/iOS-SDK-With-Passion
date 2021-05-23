/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSMutableArray;

@interface _Foot : _Geometry

{
    BOOL _animFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    NSMutableArray *_texs;
}

@property (retain, nonatomic) NSMutableArray *texs;
@property (nonatomic) BOOL animFrame;
@property (nonatomic) BOOL frameDisplayTime60th;
@property (nonatomic) unsigned char state;

@end
