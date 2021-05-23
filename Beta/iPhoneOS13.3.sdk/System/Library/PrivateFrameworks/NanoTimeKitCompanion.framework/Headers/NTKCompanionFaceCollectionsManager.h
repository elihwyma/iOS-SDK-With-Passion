/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSUUID;

@interface NTKCompanionFaceCollectionsManager : NSObject

{
    NSUUID *_activeDeviceUUID;
    NSMutableDictionary *_faceCollectionsForCollectionIdentifier;
    int _pairedDeviceVersionChangeNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)sharedFaceCollectionForDevice:(id)arg1 forCollectionIdentifier:(id)arg2;
- (id)sharedLibraryFaceCollectionsForAllDevices;

@end
