/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@interface UISlidingBarStateRequest : NSObject <Swift>

{
    _Bool _userInitiated;
    double _leadingWidth;
    double _trailingWidth;
}

@property (nonatomic) _Bool userInitiated;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingWidth;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_closestEqualOrLargerState:(id)arg1;
- (id)_matchingState:(id)arg1;
- (id)_closestState:(id)arg1 returningDistance:(double *)arg2;
- (id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double *)arg2;
- (id)_closestState:(id)arg1;

@end
