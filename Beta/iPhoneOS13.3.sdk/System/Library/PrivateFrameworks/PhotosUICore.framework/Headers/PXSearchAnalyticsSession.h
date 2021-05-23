/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXSearchActiveSearch;

@interface PXSearchAnalyticsSession : NSObject

{
    _Bool _isValid;
    _Bool _userInteractedWithCurrentSearch;
    _Bool _successful;
    unsigned long long _beginType;
    double _startTime;
    double _timeIntervalSuccess;
    double _timeIntervalFirstAssetAction;
    double _timeIntervalFirstOneUpInTopAssets;
    double _timeIntervalFirstEnteredCollection;
    unsigned long long _numberOfSearches;
    unsigned long long _numberOfSearchesUntilFirstSuccess;
    unsigned long long _numberOfSearchesUntilFirstAssetAction;
    unsigned long long _numberOfSearchesUntilFirstOneUpInTopAssets;
    unsigned long long _numberOfSearchesUntilFirstEnteredCollection;
    unsigned long long _firstAssetActionType;
    unsigned long long _firstAssetActionResultType;
    unsigned long long _firstEnteredCollectionResultType;
    PXSearchActiveSearch *_lastSearch;
}

@property (nonatomic) unsigned long long beginType;
@property (nonatomic) double startTime;
@property (nonatomic) double timeIntervalSuccess;
@property (nonatomic) double timeIntervalFirstAssetAction;
@property (nonatomic) double timeIntervalFirstOneUpInTopAssets;
@property (nonatomic) double timeIntervalFirstEnteredCollection;
@property (nonatomic) unsigned long long numberOfSearches;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection;
@property (nonatomic) unsigned long long firstAssetActionType;
@property (nonatomic) unsigned long long firstAssetActionResultType;
@property (nonatomic) unsigned long long firstEnteredCollectionResultType;
@property (retain, nonatomic) PXSearchActiveSearch *lastSearch;
@property (nonatomic) _Bool successful;
@property (nonatomic) _Bool isValid;
@property (nonatomic) _Bool userInteractedWithCurrentSearch;

+ (id)bucketedTimeInterval:(double)arg1;
+ (id)cappedSearchCount:(unsigned long long)arg1;
+ (id)_stringForResultType:(unsigned long long)arg1;
+ (id)_stringForSessionBeginType:(unsigned long long)arg1;
+ (id)_stringForActionType:(unsigned long long)arg1;

- (id)initWithBeginType:(unsigned long long)arg1;
- (void)endAndInvalidateSession;
- (void)logSearch:(id)arg1;
- (void)logAssetAction:(unsigned long long)arg1 inResult:(unsigned long long)arg2;
- (void)logOneUpInTopAssets;
- (void)logEnteredCollectionResult:(unsigned long long)arg1;
- (void)_logSuccess;

@end
