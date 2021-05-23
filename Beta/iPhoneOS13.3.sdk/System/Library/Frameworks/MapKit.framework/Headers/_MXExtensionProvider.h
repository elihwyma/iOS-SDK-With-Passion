/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, _MXAssetStorage, _MXExtensionDispatchCenter, _MXExtensionMatchingMerger, _MXExtensionServiceCenter;

@interface _MXExtensionProvider : NSObject

{
    Class _extensionMatchingClass;
    id _matchingContext;
    id _intentNonUIMatchingContext;
    id _intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
    _MXExtensionMatchingMerger *_merger;
    _MXExtensionDispatchCenter *_dispatchCenter;
    _MXExtensionServiceCenter *_serviceCenter;
    _MXAssetStorage *_assetStorage;
}

@property (retain, nonatomic) _MXExtensionMatchingMerger *merger;
@property (retain, nonatomic) _MXExtensionDispatchCenter *dispatchCenter;
@property (retain, nonatomic) _MXExtensionServiceCenter *serviceCenter;
@property (retain, nonatomic) _MXAssetStorage *assetStorage;

+ (id)sharedProvider;

- (id)init;
- (void)dealloc;
- (id)_currentExtensions;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (void)_endMatchingExtensionsIfNeeded;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1;
- (id)_intentClassFilter:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (_Bool)_enableExtension:(id)arg1 error:(id *)arg2;
- (_Bool)_disableExtension:(id)arg1 error:(id *)arg2;
- (void)loadImageForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
