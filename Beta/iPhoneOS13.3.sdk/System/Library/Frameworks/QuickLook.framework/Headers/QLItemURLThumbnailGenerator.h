/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface QLItemURLThumbnailGenerator : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)_executeCompletionHandlerWithImage:(id)arg1;
- (void)generateThumbnailWithURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
