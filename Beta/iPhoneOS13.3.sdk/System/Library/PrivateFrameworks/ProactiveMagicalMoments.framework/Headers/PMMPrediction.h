/*
 Image: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface PMMPrediction : NSObject

{
    NSArray *_predictedItems;
    NSDate *_expirationDate;
}

@property (nonatomic, readonly) NSArray *predictedItems;
@property (nonatomic, readonly) NSDate *expirationDate;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPredictedItems:(id)arg1 expirationDate:(id)arg2;
- (_Bool)isEqualToPrediction:(id)arg1;

@end
