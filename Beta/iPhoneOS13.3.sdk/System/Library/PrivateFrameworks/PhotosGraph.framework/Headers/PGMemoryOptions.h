/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSSet;

@interface PGMemoryOptions : NSObject

{
    unsigned long long _reason;
    NSDate *_universalDate;
    CLLocation *_location;
    NSArray *_peopleNames;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    NSSet *_blacklistedFeatures;
    NSArray *_existingSuggestions;
    unsigned long long _precision;
    NSDate *_lastMemoryCreationUniversalDate;
    NSDate *_baseMemoryCreationUniversalDate;
    NSDictionary *_extraParameters;
    unsigned long long _randomSeed;
    double _forcedBeta;
}

@property unsigned long long reason;
@property (retain, nonatomic) NSDate *universalDate;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *peopleNames;
@property (retain, nonatomic) NSArray *existingMemories;
@property (retain, nonatomic) NSArray *blacklistedMemories;
@property (retain, nonatomic) NSSet *blacklistedFeatures;
@property (retain, nonatomic) NSArray *existingSuggestions;
@property (nonatomic) unsigned long long precision;
@property (retain, nonatomic) NSDate *lastMemoryCreationUniversalDate;
@property (retain, nonatomic) NSDate *baseMemoryCreationUniversalDate;
@property (retain, nonatomic) NSDictionary *extraParameters;
@property (nonatomic) unsigned long long randomSeed;
@property (nonatomic) double forcedBeta;

+ (id)stringForReason:(unsigned long long)arg1;

- (id)description;
- (id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4;

@end
