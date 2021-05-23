/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface QLImageData : NSObject

{
    struct CGImageSource *_imageSource;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)type;
- (struct CGSize)size;
- (long long)orientation;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)durations;

@end
