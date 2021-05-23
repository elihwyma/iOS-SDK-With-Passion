/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutYAxisAnchor : NSLayoutAnchor

- (_Bool)isCompatibleWithAnchor:(id)arg1;
- (_Bool)validateOtherAttribute:(long long)arg1;
- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (id)offsetTo:(id)arg1;
- (id)distanceTo:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)offsetByDimension:(id)arg1;
- (id)offsetBy:(double)arg1;

@end
