/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface QLItemDataThumbnailGenerator : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)_executeCompletionHandlerWithImage:(id)arg1;
- (void)generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
