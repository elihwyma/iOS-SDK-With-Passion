/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSLayoutAnchor.h>

@interface NSLayoutAnchor (NSLayoutAnchor_AVKitAdditions)

- (id)avkit_constraintEqualToAnchor:(id)arg1 priority:(float)arg2;
- (id)avkit_constraintGreaterThanOrEqualToAnchor:(id)arg1 priority:(float)arg2;
- (id)avkit_constraintLessThanOrEqualToAnchor:(id)arg1 priority:(float)arg2;
- (id)avkit_constraintEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;
- (id)avkit_constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;
- (id)avkit_constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;

@end
