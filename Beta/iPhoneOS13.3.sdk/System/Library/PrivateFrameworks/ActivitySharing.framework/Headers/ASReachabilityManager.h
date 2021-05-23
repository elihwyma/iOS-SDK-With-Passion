/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASReachabilityStatusCache, NSOperationQueue, NSString;

@interface ASReachabilityManager : NSObject

{
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
    NSString *_serviceIdentifier;
}

@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)sharedInstanceForServiceIdentifier:(id)arg1;

- (id)init;
- (id)_initWithServiceIdentifer:(id)arg1;
- (void)_addDestinationsToQuery:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryDestinations:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long long)numberOfScheduledQueries;

@end
