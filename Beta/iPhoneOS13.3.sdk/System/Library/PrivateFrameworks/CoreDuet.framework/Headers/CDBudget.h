/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDBudget : NSObject

{
    NSString *_name;
    long long _type;
    unsigned long long _integerId;
}

@property (readonly) unsigned long long integerId;
@property (readonly) NSString *name;
@property (readonly) long long type;

- (id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id *)arg5;
- (_Bool)incrementByValue:(long long)arg1 error:(id *)arg2;
- (_Bool)decrementByValue:(long long)arg1 error:(id *)arg2;
- (_Bool)compareValueTo:(long long)arg1 swapOnMatchWithValue:(long long)arg2 error:(id *)arg3;
- (long long)creditsRemainingWithError:(id *)arg1;
- (_Bool)deleteWithError:(id *)arg1;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 error:(id *)arg4;
- (id)childBudgetWithName:(id)arg1 maxFraction:(double)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id *)arg5;
- (id)forecastEffectiveOnDate:(id)arg1 error:(id *)arg2;

@end
