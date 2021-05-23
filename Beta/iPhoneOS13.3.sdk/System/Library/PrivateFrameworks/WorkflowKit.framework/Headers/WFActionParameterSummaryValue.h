/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WFActionParameterSummaryValue : NSObject

{
    NSArray *_requiredVisibleParameterKeys;
    NSDictionary *_requiredValues;
    NSString *_summaryString;
    NSString *_key;
}

@property (copy, nonatomic, readonly) NSArray *requiredVisibleParameterKeys;
@property (copy, nonatomic, readonly) NSDictionary *requiredValues;
@property (copy, nonatomic, readonly) NSString *summaryString;
@property (copy, nonatomic, readonly) NSString *key;

+ (id)parenthesisRegularExpression;

- (id)initWithKey:(id)arg1 summaryString:(id)arg2;
- (_Bool)matchesVisibleParameterKeys:(id)arg1 checkingRequiredValuesInAction:(id)arg2;
- (id)explodedKeysWithPossibleValuesInAction:(id)arg1;
- (void)explodeKeys:(id)arg1 currentKeyIndex:(unsigned long long)arg2 possibleValuesPerKey:(id)arg3 currentCombination:(id)arg4 results:(id)arg5;
- (id)mapPossibleValuesToKeys:(id)arg1;

@end
