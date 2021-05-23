/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@interface _CDPModelTuningState : NSObject

{
    int _i;
    int _j;
    float _bestLogLambda;
    float _bestW0;
    float _bestScore;
    float _bestThreshold;
}

@property (nonatomic) int i;
@property (nonatomic) int j;
@property (nonatomic) float bestLogLambda;
@property (nonatomic) float bestW0;
@property (nonatomic) float bestScore;
@property (nonatomic) float bestThreshold;
@property (nonatomic, readonly) float progress;

+ (_Bool)supportsSecureCoding;
+ (id)initialTuningState;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
