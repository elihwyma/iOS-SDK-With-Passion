/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSDictionary, NSMutableDictionary, NSString, NSUUID, _DKEventStream;

@interface _DKHistogram : NSObject

{
    NSMutableDictionary *_histogram;
    unsigned long long _countOverAllValues;
    NSDateInterval *_interval;
    NSUUID *_identifier;
    NSString *_customIdentifier;
    _DKEventStream *_stream;
    NSArray *_deviceIdentifiers;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *customIdentifier;
@property (retain, nonatomic) NSDateInterval *interval;
@property (retain, nonatomic) NSDictionary *histogram;
@property (nonatomic) unsigned long long countOverAllValues;
@property (retain, nonatomic) _DKEventStream *stream;
@property (retain, nonatomic) NSArray *deviceIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)entityName;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)countDictionary;
- (void)_addPropertiesFrom:(id)arg1;
- (double)countForValueDouble:(id)arg1;
- (unsigned long long)countForValue:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (id)initWithValues:(id)arg1;
- (double)relativeFrequencyForValue:(id)arg1;
- (void)addValue:(id)arg1;
- (void)addValue:(id)arg1 withCount:(double)arg2;
- (void)subtractValue:(id)arg1;
- (void)addHistogram:(id)arg1;
- (void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2;
- (void)subtractHistogram:(id)arg1;
- (id)insertInManagedObjectContext:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

@end
