/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <iAd/Swift-Protocol.h>

@class ADAdSpace;

@protocol ADActionViewControllerInterface <Swift>

@property (nonatomic, readonly) _Bool readyForPresentation;
@property (weak, nonatomic, readonly) ADAdSpace *adSpace;

- (unsigned short)dismiss;
- (unsigned short)clientApplicationDidEnterBackground;
- (unsigned short)clientApplicationCancelledAction;

@end
