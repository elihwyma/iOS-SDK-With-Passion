/*
 Image: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface BMRule : NSObject

{
    struct NSSet *_antecedent;
    struct NSSet *_consequent;
    double _support;
    double _confidence;
}

@property (retain, nonatomic) NSSet *antecedent;
@property (retain, nonatomic) NSSet *consequent;
@property (nonatomic) double support;
@property (nonatomic) double confidence;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAntecedent:(struct NSSet *)arg1 consequent:(struct NSSet *)arg2 support:(double)arg3 confidence:(double)arg4;

@end
