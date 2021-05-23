/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@protocol CSCoverSheetViewTransitionSource <Swift>

@property (nonatomic, readonly, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) CDStruct_7238a68f transitionContext;

- (unsigned short)cancelTransition;

@end
