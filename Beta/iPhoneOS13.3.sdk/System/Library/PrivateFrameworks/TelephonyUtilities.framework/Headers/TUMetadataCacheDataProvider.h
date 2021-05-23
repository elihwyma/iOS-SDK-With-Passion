/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue, TUMetadataCacheDataProviderDelegate;

@interface TUMetadataCacheDataProvider : NSObject

{
    id <TUMetadataCacheDataProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_providerCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableDictionary *providerCache;
@property (weak, nonatomic) id <TUMetadataCacheDataProviderDelegate> delegate;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;

+ (id)classIdentifier;

- (id)init;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)refresh;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;
- (void)setObject:(id)arg1 forDestinationID:(id)arg2;
- (id)metadataForDestinationID:(id)arg1;

@end
