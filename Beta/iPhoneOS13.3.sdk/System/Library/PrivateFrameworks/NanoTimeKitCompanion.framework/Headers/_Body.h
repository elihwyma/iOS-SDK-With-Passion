/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/_Geometry.h>

@class MISSING_TYPE, NSArray, NSMutableArray;

@interface _Body : _Geometry

{
    BOOL _animationDirection;
    BOOL _animationFrame;
    BOOL _frameDisplayTime60th;
    unsigned char _state;
    unsigned char _waitingForFootRaise;
    float _width;
    float _height;
    float _curBodyX;
    NSArray *_texs;
    NSMutableArray *_shiftTexs12;
    NSMutableArray *_shiftTexs14;
    NSMutableArray *_shiftTexs23;
    NSMutableArray *_shiftTexs13;
    MISSING_TYPE *_bone;
    MISSING_TYPE *_offset;
}

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSArray *texs;
@property (retain, nonatomic) NSMutableArray *shiftTexs12;
@property (retain, nonatomic) NSMutableArray *shiftTexs14;
@property (retain, nonatomic) NSMutableArray *shiftTexs23;
@property (retain, nonatomic) NSMutableArray *shiftTexs13;
@property (nonatomic) MISSING_TYPE *bone;
@property (nonatomic) MISSING_TYPE *offset;
@property (nonatomic) float curBodyX;
@property (nonatomic) BOOL animationDirection;
@property (nonatomic) BOOL animationFrame;
@property (nonatomic) BOOL frameDisplayTime60th;
@property (nonatomic) unsigned char state;
@property (nonatomic) unsigned char waitingForFootRaise;

@end
