/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface FRRingBuffer : NSObject

{
    unsigned long long _capacity;
    NSMutableArray *_values;
    unsigned long long _position;
    double _min;
    double _max;
}

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSMutableArray *values;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic, readonly) NSDictionary *dictionary;

- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2;
- (void)insertValue:(double)arg1;

@end
