/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UITableViewPrefetchContext : NSObject

{
    _Bool _prefetchScheduled;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _cancelHandler;
    NSMutableIndexSet *_outstandingRequests;
    long long _maxIndex;
    double _lastContentOffset;
    long long _prefetchItemCount;
    long long _refreshPrefetchThresholdCount;
    long long _cancelThresholdCount;
    struct _NSRange _lastVisibleIndexRange;
}

@property (retain, nonatomic) NSMutableIndexSet *outstandingRequests;
@property (nonatomic) long long maxIndex;
@property (nonatomic) struct _NSRange lastVisibleIndexRange;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) long long prefetchItemCount;
@property (nonatomic) long long refreshPrefetchThresholdCount;
@property (nonatomic) long long cancelThresholdCount;
@property (nonatomic) _Bool prefetchScheduled;
@property (copy, nonatomic) CDUnknownBlockType requestHandler;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;

- (id)description;
- (void)cancel;
- (void)cancelWithNewMaxIndex:(long long)arg1;
- (id)initWithMaxIndex:(long long)arg1 prefetchItemCount:(long long)arg2 refreshPrefetchThresholdCount:(long long)arg3 cancelThresholdCount:(long long)arg4;
- (void)updateVisibleIndexRange:(struct _NSRange)arg1 withContentOffset:(double)arg2;
- (int)_effectiveRefreshDirectionForProposedVisibleIndexRange:(struct _NSRange)arg1 withContentOffset:(double)arg2;
- (struct _NSRange)_offsetAndValidateRange:(struct _NSRange)arg1 firstIndexOffset:(long long)arg2 lastIndexOffset:(long long)arg3;
- (struct _NSRange)_validatedRangeWithLocation:(long long)arg1 length:(long long)arg2;
- (void)schedulePrefetchRequestAfterNextCACommit:(id)arg1;
- (id)computedPrefetchIndexSet;

@end
