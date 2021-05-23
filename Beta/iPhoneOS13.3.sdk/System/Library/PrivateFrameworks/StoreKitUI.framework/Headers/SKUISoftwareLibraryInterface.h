/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUISoftwareLibraryInterface : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)stateForLibraryItem:(id)arg1;
- (_Bool)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
