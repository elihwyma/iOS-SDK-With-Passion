/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSNumber;

@interface _DPValueRange : NSObject

{
    NSNumber *_minPossible;
    NSNumber *_maxPossible;
    NSNumber *_range;
}

@property (nonatomic, readonly) NSNumber *minPossible;
@property (nonatomic, readonly) NSNumber *maxPossible;
@property (nonatomic, readonly) NSNumber *range;

+ (id)rangeWithMin:(id)arg1 max:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMin:(id)arg1 max:(id)arg2;
- (_Bool)isEqualToValueRange:(id)arg1;

@end
