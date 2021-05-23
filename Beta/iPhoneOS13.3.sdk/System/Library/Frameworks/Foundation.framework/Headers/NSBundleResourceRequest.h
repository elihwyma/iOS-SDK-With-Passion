/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSProgress, NSSet, NSString;

@interface NSBundleResourceRequest : NSObject

{
    NSSet *_tags;
    double _priority;
    NSBundle *_bundle;
    NSProgress *_progress;
    long long _fetchState;
}

@property double loadingPriority;
@property (copy, readonly) NSSet *tags;
@property (readonly) NSBundle *bundle;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_connection;
+ (void)_setConnection:(id)arg1;
+ (id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2;
+ (id)_manifestWithBundle:(id)arg1 error:(id *)arg2;
+ (id)_extensionEndpoint;
+ (id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1;
+ (void)_addExtensionEndpoint:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithTags:(id)arg1 bundle:(id)arg2;
- (void)endAccessingResources;
- (id)initWithTag:(id)arg1;
- (id)initWithTags:(id)arg1;
- (void)beginAccessingResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)conditionallyBeginAccessingResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
