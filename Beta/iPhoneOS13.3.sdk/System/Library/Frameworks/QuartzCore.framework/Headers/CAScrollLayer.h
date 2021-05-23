/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CAScrollLayer : CALayer

@property (copy) NSString *scrollMode;

+ (id)defaultValueForKey:(id)arg1;
+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)scrollToPoint:(struct CGPoint)arg1;
- (void)scrollToRect:(struct CGRect)arg1;
- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;
- (struct CGRect)_visibleRectOfLayer:(id)arg1;

@end
