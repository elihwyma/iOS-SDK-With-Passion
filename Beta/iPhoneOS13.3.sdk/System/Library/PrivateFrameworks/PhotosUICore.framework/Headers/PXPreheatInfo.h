/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@protocol PXDisplayAssetFetchResult;

@interface PXPreheatInfo : NSObject

{
    NSMutableIndexSet *_preheatedIndexes;
    id <PXDisplayAssetFetchResult> _fetchResult;
    long long _preheatOrigin;
    long long _cachedBytes;
}

@property (nonatomic, readonly) NSMutableIndexSet *preheatedIndexes;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> fetchResult;
@property (nonatomic, readonly) long long preheatOrigin;
@property (nonatomic, readonly) _Bool finished;
@property (nonatomic) long long cachedBytes;

- (void)markAsFinished;
- (id)initWithFetchResult:(id)arg1 origin:(long long)arg2;

@end
