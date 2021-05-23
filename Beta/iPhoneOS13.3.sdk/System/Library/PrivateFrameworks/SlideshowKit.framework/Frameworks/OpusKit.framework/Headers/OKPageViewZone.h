/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface OKPageViewZone : NSObject

{
    struct CGRect _frame;
    NSMutableSet *_widgetViews;
}

@property (nonatomic, readonly) struct CGRect frame;
@property (retain, nonatomic, readonly) NSMutableSet *widgetViews;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
