/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray;

@protocol OS_dispatch_queue;

@interface _MDExtensionLoader : NSObject

{
    _Bool _extensionsCacheNeedsLoad;
    id _matchingContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_extensionsByBundleId;
    NSDictionary *_fileProviderBundleMap;
    NSMutableArray *_containerPaths;
    NSMutableArray *_queueLabels;
    NSMutableArray *_containerIDs;
    NSMutableArray *_extensionIdentifiers;
    long long _notificationCount;
}

@property (retain, nonatomic) id matchingContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *extensionsByBundleId;
@property (retain, nonatomic) NSDictionary *fileProviderBundleMap;
@property (retain, nonatomic) NSMutableArray *containerPaths;
@property (retain, nonatomic) NSMutableArray *queueLabels;
@property (retain, nonatomic) NSMutableArray *containerIDs;
@property (retain, nonatomic) NSMutableArray *extensionIdentifiers;
@property _Bool extensionsCacheNeedsLoad;
@property (nonatomic) long long notificationCount;

- (id)init;
- (void)findExtensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(CDUnknownBlockType)arg1;
- (void)stopLookingForExtensions;

@end
