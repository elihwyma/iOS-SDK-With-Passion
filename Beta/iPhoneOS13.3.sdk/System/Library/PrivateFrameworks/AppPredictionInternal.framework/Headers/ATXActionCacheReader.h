/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionClient/ATXActionCacheClientReader.h>

@class NSString;

@interface ATXActionCacheReader : ATXActionCacheClientReader

{
    unordered_map_7f1dd58d _actionToIndexMap;
    vector_5be31511 _predictionItems;
    vector_5be31511 _extraPredictionItems;
    NSString *_abGroup;
    long long _assetVersion;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) long long assetVersion;

+ (void)_getExtraPredictionsFromChunk:(id)arg1 map:(vector_5be31511 *)arg2 abGroup:(id *)arg3 assetVersion:(long long *)arg4;
+ (void)_getIndexToPredictionItemMapWithChunk:(id)arg1 withPredictionCount:(long long)arg2 map:(vector_5be31511 *)arg3 abGroup:(id *)arg4 assetVersion:(long long *)arg5;
+ (unordered_map_c647d171)getActionKeyToPredictionItemMapFromChunk:(id)arg1;
+ (void)_getActionKeyToPredictionItemMapFromChunk:(id)arg1 map:(unordered_map_c647d171 *)arg2 abGroup:(id *)arg3 assetVersion:(long long *)arg4;

- (id)init;
- (id)initWithData:(id)arg1;
- (id).cxx_construct;
- (id)initWithChunks:(id)arg1;
- (struct ATXPredictionItem)predictionItemForAction:(id)arg1;
- (void)enumerateExtraPredictionItemsWithBlock:(CDUnknownBlockType)arg1;
- (unordered_map_7f1dd58d)_getActionToIndexMap;

@end
