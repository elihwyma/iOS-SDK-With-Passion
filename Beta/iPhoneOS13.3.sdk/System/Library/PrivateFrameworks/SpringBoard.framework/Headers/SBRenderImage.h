/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBRenderImage : NSObject

{
    struct _CARenderImage *_image;
}

- (void)dealloc;
- (void *)CA_copyRenderValue;
- (id)initWithRenderImage:(struct _CARenderImage *)arg1;

@end
