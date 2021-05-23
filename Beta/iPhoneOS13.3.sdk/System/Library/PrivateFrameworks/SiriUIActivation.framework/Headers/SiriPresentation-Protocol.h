/*
 Image: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
 */

#import <SiriUIActivation/Swift-Protocol.h>

@protocol SiriPresentationControllerDelegate;

@protocol SiriPresentation <Swift>

@property (nonatomic, readonly) long long identifier;
@property (retain, nonatomic) id <SiriPresentationControllerDelegate> siriPresentationControllerDelegate;

- (unsigned short)isEnabled;
- (unsigned short)dismiss;
- (unsigned short)dismissWithOptions: /* Error: Ran out of types for this method. */;

@end
