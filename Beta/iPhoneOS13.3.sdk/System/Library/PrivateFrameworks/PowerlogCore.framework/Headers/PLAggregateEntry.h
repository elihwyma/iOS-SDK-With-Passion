/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PLAggregateEntry : NSObject

{
    short _aggregateFunction;
    NSString *_entryKey;
    NSMutableDictionary *_matchingKeyToValue;
    NSArray *_otherAggregateKeys;
    NSString *_aggregateKey;
    double _aggregateValue;
}

@property (retain) NSString *entryKey;
@property (retain, nonatomic) NSMutableDictionary *matchingKeyToValue;
@property (retain) NSArray *otherAggregateKeys;
@property (retain) NSString *aggregateKey;
@property double aggregateValue;
@property short aggregateFunction;

- (id)description;
- (id)query;
- (void)updateWithValue:(double)arg1;
- (id)matchingPairs;
- (id)aggregateOperationWithMatchingPairs:(id)arg1;

@end
