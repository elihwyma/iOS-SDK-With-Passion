//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMCSBoundedQueue : NSObject
{
    BOOL _isValid;
    NSUInteger _bytesUpperBound;
    NSUInteger _bytesErrorLevel;
    NSMutableArray *_entries;
    struct dispatch_semaphore_s _boundsExceeded;
}

@property(nonatomic) struct dispatch_semaphore_s boundsExceeded; // @synthesize boundsExceeded=_boundsExceeded;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(readonly, nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) NSUInteger bytesErrorLevel; // @synthesize bytesErrorLevel=_bytesErrorLevel;
@property(readonly, nonatomic) NSUInteger bytesUpperBound; // @synthesize bytesUpperBound=_bytesUpperBound;
// - (void).cxx_destruct;
- (void)invalidate;
- (void)removeNextDataWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addData:(id)arg1;
- (BOOL)_sync_isFull;
- (NSUInteger)_sync_aggregateByteCount;
- (void)dealloc;
- (id)initWithUpperBound:(NSUInteger)arg1;

@end

