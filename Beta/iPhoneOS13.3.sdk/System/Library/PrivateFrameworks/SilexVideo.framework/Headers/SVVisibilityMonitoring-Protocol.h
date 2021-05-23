/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <SilexVideo/Swift-Protocol.h>

@protocol SVVisibilityMonitoring <Swift>

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) _Bool appeared;
@property (nonatomic, readonly) double visiblePercentage;
@property (weak, nonatomic, readonly) id object;

- (unsigned short)onVisiblePercentageChange: /* Error: Ran out of types for this method. */;
- (unsigned short)onDidAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)onDidDisappear: /* Error: Ran out of types for this method. */;
- (unsigned short)onWillAppear: /* Error: Ran out of types for this method. */;
- (unsigned short)onWillDisappear: /* Error: Ran out of types for this method. */;

@end
