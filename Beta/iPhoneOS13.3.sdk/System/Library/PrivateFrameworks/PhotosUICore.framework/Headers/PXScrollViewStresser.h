/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, UIScrollView;

@interface PXScrollViewStresser : NSObject

{
    unsigned int _scrollDirection;
    CADisplayLink *_displayLink;
    UIScrollView *_scrollView;
    long long _scrollCount;
}

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned int scrollDirection;
@property (nonatomic) long long scrollCount;
@property (nonatomic, readonly, getter=isScrolling) _Bool scrolling;

+ (id)sharedInstance;

- (void)stopScrolling;
- (void)_handleDisplayLink:(id)arg1;
- (void)startScrollingScrollView:(id)arg1 axis:(long long)arg2;

@end
