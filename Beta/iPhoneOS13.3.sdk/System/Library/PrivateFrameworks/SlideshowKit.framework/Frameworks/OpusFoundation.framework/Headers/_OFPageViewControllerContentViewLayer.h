/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <CALayer.h>

@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer

{
    OFPageViewController *_progressReportDelegate;
    double _progress;
}

@property (nonatomic) OFPageViewController *progressReportDelegate;
@property (nonatomic) double progress;

+ (_Bool)needsDisplayForKey:(id)arg1;

- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end
