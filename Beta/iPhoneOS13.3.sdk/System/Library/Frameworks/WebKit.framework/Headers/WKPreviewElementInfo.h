/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject

{
    struct RetainPtr<NSURL> _linkURL;
}

@property (nonatomic, readonly) NSURL *linkURL;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)_initWithLinkURL:(id)arg1;

@end
