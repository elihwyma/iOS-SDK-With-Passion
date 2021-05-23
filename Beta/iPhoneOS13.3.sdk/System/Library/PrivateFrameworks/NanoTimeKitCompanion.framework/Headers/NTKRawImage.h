/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface NTKRawImage : NSObject

{
    int _width;
    int _height;
    const float *_contents;
}

@property (nonatomic, readonly) const float *contents;
@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;

+ (id)rawImageWithImage:(id)arg1 width:(int)arg2 height:(int)arg3;

- (void)dealloc;
- (void)write:(id)arg1;
- (id)scaleToWidth:(int)arg1 height:(int)arg2;
- (id)initWithContent:(MISSING_TYPE **)arg1 width:(int)arg2 height:(int)arg3;

@end
