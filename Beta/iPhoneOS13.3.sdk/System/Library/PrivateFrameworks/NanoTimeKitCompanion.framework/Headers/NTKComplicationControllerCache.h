/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, NTKFaceCollection;

@interface NTKComplicationControllerCache : NSObject

{
    NSMutableDictionary *_controllers;
    NSMutableDictionary *_controllersToOwningFace;
    NSMapTable *_faceToLegacyControllers;
    NTKFaceCollection *_libraryCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_purge;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setLibraryCollection:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)_removeComplicationsForFace:(id)arg1;
- (void)_addComplicationsForFace:(id)arg1;
- (void)_updateComplicationsForFace:(id)arg1;
- (id)controllerForComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 create:(CDUnknownBlockType)arg4;
- (id)legacyControllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3 create:(CDUnknownBlockType)arg4;

@end
