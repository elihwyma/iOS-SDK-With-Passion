/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <MPSMatrix.h>

@interface MPSMatrix (Utils)

- (void)incrementReadCount;
- (void)resetReadCount;
- (void)decrementReadCount;

@end
