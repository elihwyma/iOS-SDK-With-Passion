/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBDateTimeRange, _INPBHomeUserTask, _INPBIntentMetadata;

@protocol _INPBControlHomeIntent <Swift>

@property (copy, nonatomic) NSArray *contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (nonatomic, readonly) _Bool hasTime;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (nonatomic, readonly) _Bool hasUserTask;

+ (unsigned short)contentsType;
+ (unsigned short)filtersType;

- (unsigned short)clearFilters;
- (unsigned short)clearContents;
- (unsigned short)addContents: /* Error: Ran out of types for this method. */;
- (unsigned short)contentsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addFilters: /* Error: Ran out of types for this method. */;
- (unsigned short)filtersAtIndex: /* Error: Ran out of types for this method. */;

@end
