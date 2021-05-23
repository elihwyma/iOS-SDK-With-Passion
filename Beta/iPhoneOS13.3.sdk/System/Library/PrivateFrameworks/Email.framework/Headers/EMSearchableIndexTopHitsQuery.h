/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class CSTopHitSearchQuery, EFPromise, NSArray, NSLock, NSMutableArray, NSProgress, NSString;

@interface EMSearchableIndexTopHitsQuery : NSObject <Swift>

{
    NSString *_searchString;
    NSArray *_filterQueries;
    NSString *_keyboardLanguage;
    unsigned long long _limit;
    CSTopHitSearchQuery *_topHitSearchQuery;
    NSMutableArray *_foundItems;
    EFPromise *_spotlightTopHitsQueryResultPromise;
    NSProgress *_progress;
    NSProgress *_internalProgress;
    NSString *_logPrefix;
    NSLock *_lock;
}

@property (retain) CSTopHitSearchQuery *topHitSearchQuery;
@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSProgress *internalProgress;
@property (retain, nonatomic) NSString *logPrefix;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic, readonly) NSString *searchString;
@property (copy, nonatomic, readonly) NSArray *filterQueries;
@property (copy, nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)cancel;
- (void)start;
- (void)_cancel;
- (void)_configureTopHitsSearchQuery:(id)arg1;
- (void)_searchFoundItems:(id)arg1;
- (void)_searchDidCompleteWithError:(id)arg1;
- (id)initWithSearchString:(id)arg1 filterQueries:(id)arg2 keyboardLanguage:(id)arg3 limit:(unsigned long long)arg4;
- (id)topHitsQueryResult;

@end
