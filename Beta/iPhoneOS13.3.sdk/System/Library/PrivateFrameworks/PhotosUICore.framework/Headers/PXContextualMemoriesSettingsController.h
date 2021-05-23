/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PXContextualMemoriesSettings;

@interface PXContextualMemoriesSettingsController : NSObject

{
    _Bool _requestingUpdates;
    PXContextualMemoriesSettings *_settings;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_registrationIdentifiers;
}

@property (nonatomic, readonly) PXContextualMemoriesSettings *settings;
@property (nonatomic, getter=isRequestingUpdates) _Bool requestingUpdates;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *registrationIdentifiers;

+ (id)sharedController;

- (id)init;
- (void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;

@end
