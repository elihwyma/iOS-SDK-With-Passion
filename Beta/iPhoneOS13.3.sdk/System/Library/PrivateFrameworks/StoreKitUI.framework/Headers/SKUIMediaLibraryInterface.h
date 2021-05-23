/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaLibraryInterface : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeMediaItemsForLibraryItems:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;
- (_Bool)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_newDefaultQuery;
- (long long)_availabilityForMediaItem:(id)arg1;
- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (_Bool)isItemLocalAudiobook:(id)arg1;

@end
