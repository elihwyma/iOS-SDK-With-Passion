/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTimeCondition.h>

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition

{
    unsigned long long _comparisonType;
    NSDateComponents *_dateComponents;
}

@property (nonatomic, readonly) NSDateComponents *dateComponents;
@property (nonatomic, readonly) _Bool isTimeOfDayCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long comparisonType;

- (long long)compare:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithDateComponents:(id)arg1 comparisonType:(unsigned long long)arg2;

@end
