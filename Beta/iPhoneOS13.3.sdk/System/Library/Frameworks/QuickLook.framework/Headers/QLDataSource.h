/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface QLDataSource : NSObject

{
    NSArray *_previewItems;
}

- (id)initWithPreviewItems:(id)arg1;
- (void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
