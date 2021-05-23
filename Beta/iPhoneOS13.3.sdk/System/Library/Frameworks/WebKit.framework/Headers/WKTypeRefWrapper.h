/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface WKTypeRefWrapper : NSObject

{
    struct WKRetainPtr<const void *> _object;
}

@property (readonly) void *object;

- (id)initWithObject:(void *)arg1;
- (id).cxx_construct;

@end
