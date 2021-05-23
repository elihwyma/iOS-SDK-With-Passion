/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSFileProviderDomain, NSString;

__attribute__((visibility("hidden")))
@interface FPMaterializedSetEnumerator : NSObject

{
    NSFileProviderDomain *_domain;
    NSString *_provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithDomain:(id)arg1;
- (void)currentSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initWithDomain:(id)arg1 provider:(id)arg2;

@end
