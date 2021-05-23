/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer

{
    id _owningView;
    long long _count;
    struct CGSize _imageSize;
    struct CGSize _textSize;
    UIFont *_font;
}

@property (nonatomic) id owningView;
@property (nonatomic) long long count;

+ (int)initImageCache;
+ (void)deallocImageCache;
+ (id)imageBadgeForCount:(long long)arg1;

- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGSize)preferredFrameSize;
- (void)calculateBadgeMetrics;
- (struct CGImage *)newNumberBadge;

@end
