/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollListener : NSObject <Swift>

{
    UIWebOverflowScrollView *_scrollView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (id)initWithScrollView:(id)arg1;
- (void)_didCompleteScrolling;

@end
