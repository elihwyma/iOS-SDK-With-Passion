/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/Swift-Protocol.h>

@protocol MTLDrawable <Swift>

@property (nonatomic, readonly) double presentedTime;
@property (nonatomic, readonly) unsigned long long drawableID;

- (unsigned short)present;
- (unsigned short)presentAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)presentAfterMinimumDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)addPresentedHandler: /* Error: Ran out of types for this method. */;

@end
