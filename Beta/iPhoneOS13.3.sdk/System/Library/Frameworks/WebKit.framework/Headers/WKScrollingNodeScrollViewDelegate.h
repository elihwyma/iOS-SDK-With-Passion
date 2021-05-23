/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

#import <WebKit/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKScrollingNodeScrollViewDelegate : NSObject <Swift>

{
    struct ScrollingTreeScrollingNodeDelegateIOS *_scrollingTreeNodeDelegate;
    _Bool _inUserInteraction;
}

@property (nonatomic, getter=_isInUserInteraction) _Bool inUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (id)_actingParentScrollViewForScrollView:(id)arg1;
- (void)cancelPointersForGestureRecognizer:(id)arg1;
- (id)initWithScrollingTreeNodeDelegate:(struct ScrollingTreeScrollingNodeDelegateIOS *)arg1;

@end
