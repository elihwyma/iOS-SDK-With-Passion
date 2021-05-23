/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject

{
    NSArray *_providers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) NSArray *providers;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)classIdentifier;

- (id)init;
- (id)initWithDataProviders:(id)arg1;
- (id)metadataForDestinationID:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;
- (id)initWithQueue:(id)arg1 dataProviders:(id)arg2;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(_Bool)arg2;

@end
