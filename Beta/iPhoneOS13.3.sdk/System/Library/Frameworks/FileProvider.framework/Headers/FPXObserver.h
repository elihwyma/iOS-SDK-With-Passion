/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPItemID, FPXDomainContext, FPXExtensionContext, NSFileProviderExtension;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXObserver : NSObject

{
    FPItemID *_observedItemID;
    FPXDomainContext *_domainContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderExtension *_strongVendorInstance;
    FPXExtensionContext *_strongExtensionContext;
    _Bool _invalidated;
}

@property (readonly, getter=isInvalidated) _Bool invalidated;

- (id)init;
- (void)invalidate;
- (void)_fixupFavoriteRank:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2;
- (id)updateForProviderItem:(id)arg1;
- (void)verifyVendorToken:(id)arg1;

@end
