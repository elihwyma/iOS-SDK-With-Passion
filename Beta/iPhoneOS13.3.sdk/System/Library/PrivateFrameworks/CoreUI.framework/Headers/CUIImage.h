/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@interface CUIImage : NSObject <Swift>

{
    struct CGImage *_cgImage;
}

@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) struct CGSize size;

+ (id)imageWithCGImage:(struct CGImage *)arg1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (struct CGImage *)cgImage;

@end
