/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/Swift-Protocol.h>

@protocol SBUIPowerDownViewDelegate;

@protocol SBUIPowerDownViewInterface <Swift>

@property (weak, nonatomic) id <SBUIPowerDownViewDelegate> delegate;

- (unsigned short)showAnimated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hideAnimated:completion: /* Error: Ran out of types for this method. */;

@end
