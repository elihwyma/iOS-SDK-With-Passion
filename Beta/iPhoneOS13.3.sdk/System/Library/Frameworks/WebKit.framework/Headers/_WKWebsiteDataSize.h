/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@interface _WKWebsiteDataSize : NSObject

{
    struct Size _size;
}

@property (nonatomic, readonly) unsigned long long totalSize;

- (id).cxx_construct;
- (id)initWithSize:(const struct Size *)arg1;
- (unsigned long long)sizeOfDataTypes:(id)arg1;

@end
