/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDAccessControlServicer, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _FPDAccessControlEnumerator : NSObject

{
    NSNumber *_bundleKey;
    FPDAccessControlServicer *_servicer;
    NSNumber *_limit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)currentSyncAnchorWithCompletion:(CDUnknownBlockType)arg1;
- (void)enumerateItemsFromPage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enumerateChangesFromToken:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)keepAliveConnectionForRegisteredObserver:(CDUnknownBlockType)arg1;
- (id)initWithBundleIdentifier:(id)arg1 servicer:(id)arg2;
- (id)fetchOnDB:(id)arg1 withOffset:(unsigned long long)arg2;
- (void)enumeratorBecameFrontmost:(_Bool)arg1 inWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
