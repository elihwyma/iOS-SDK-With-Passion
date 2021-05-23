/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _DKEventStatsCollection : NSObject

{
    NSMutableDictionary *_eventCounterStats;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *name;

+ (id)collectionWithName:(id)arg1;
+ (id)allEventStatsCollections;
+ (id)counterWithClass:(Class)arg1 collectionName:(id)arg2 eventName:(id)arg3 eventType:(id)arg4 eventTypePossibleValues:(id)arg5 hasResult:(_Bool)arg6 scalar:(_Bool)arg7;

- (id)initWithName:(id)arg1;
- (id)eventStatsCounterWithKey:(id)arg1;
- (void)addEventStatsCounter:(id)arg1 withKey:(id)arg2;
- (id)allEventStatsCounters;

@end
