/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTimeCondition.h>

@class NSDateComponents, NSString;

@interface HFSunriseSunsetCondition : HFTimeCondition

{
    unsigned long long _comparisonType;
    NSString *_significantEvent;
    NSDateComponents *_offset;
}

@property (copy, nonatomic, readonly) NSString *significantEvent;
@property (nonatomic, readonly) NSDateComponents *offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long comparisonType;

- (long long)compare:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithSignificantEvent:(id)arg1 comparisonType:(unsigned long long)arg2;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2 comparisonType:(unsigned long long)arg3;

@end
