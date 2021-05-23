/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol FBSApplicationDataStoreRepositoryClient, OS_dispatch_queue;

@interface FBSApplicationDataStoreClientFactory : NSObject

{
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBSApplicationDataStoreRepositoryClient> _sharedClient;
    NSArray *_prefetchedKeys;
}

@property (retain, nonatomic) NSArray *prefetchedKeys;

+ (id)sharedInstance;
+ (_Bool)isServerProcess;

- (id)init;
- (id)checkout;
- (void)checkin;

@end
