/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <CarPlay/Swift-Protocol.h>

@class CPWindow;

@protocol CPWindowProviding <Swift>

@property (nonatomic, readonly) CPWindow *carWindow;

- (unsigned short)activationState;
- (unsigned short)updateLayoutGuideWithInsets: /* Error: Ran out of types for this method. */;

@end
