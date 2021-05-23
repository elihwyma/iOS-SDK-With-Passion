/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject

{
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _historyLimit;
}

@property (nonatomic, readonly) long long historyLimit;

- (id)init;
- (void)addChangeDetails:(id)arg1;
- (id)initWithChangeHistoryLimit:(long long)arg1;
- (id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;

@end
