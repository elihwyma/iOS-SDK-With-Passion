/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate;

@interface RESessionRelevanceProvider : RERelevanceProvider

{
    _Bool _historic;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly, getter=isHistoric) _Bool historic;

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)_hash;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)dictionaryEncoding;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(_Bool)arg3;

@end
