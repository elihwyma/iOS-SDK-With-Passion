/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface WFWebViewLink : NSObject

{
    NSURL *_href;
    struct CGRect _rect;
}

@property (nonatomic, readonly) NSURL *href;
@property (nonatomic, readonly) struct CGRect rect;

- (id)initWithHref:(id)arg1 rect:(struct CGRect)arg2;

@end
