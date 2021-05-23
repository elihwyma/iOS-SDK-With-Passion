/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary *options;
@property unsigned int transitionFlags;
@property (copy) NSString *type;
@property (copy) NSString *subtype;
@property float startProgress;
@property float endProgress;

- (void)setFilter:(id)arg1;
- (id)filter;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@end
