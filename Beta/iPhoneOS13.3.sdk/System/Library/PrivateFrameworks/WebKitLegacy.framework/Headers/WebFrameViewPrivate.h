/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WAKScrollView, WebFrame;

__attribute__((visibility("hidden")))
@interface WebFrameViewPrivate : NSObject

{
    WebFrame *webFrame;
    WAKScrollView *frameScrollView;
    _Bool includedInWebKitStatistics;
}

- (void)dealloc;

@end
