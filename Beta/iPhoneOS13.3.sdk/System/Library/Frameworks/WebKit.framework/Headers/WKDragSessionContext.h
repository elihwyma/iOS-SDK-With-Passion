/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKDragSessionContext : NSObject

{
    struct RetainPtr<NSMutableArray> _temporaryDirectories;
}

- (id).cxx_construct;
- (void)addTemporaryDirectory:(id)arg1;
- (void)cleanUpTemporaryDirectories;

@end
