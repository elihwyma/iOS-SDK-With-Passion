/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBIntentMetadata;

@protocol _INPBShowHomeIntent <Swift>

@property (copy, nonatomic) NSArray *filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (nonatomic, readonly) _Bool hasTime;

+ (unsigned short)filtersType;

- (unsigned short)clearFilters;
- (unsigned short)addFilters: /* Error: Ran out of types for this method. */;
- (unsigned short)filtersAtIndex: /* Error: Ran out of types for this method. */;

@end
