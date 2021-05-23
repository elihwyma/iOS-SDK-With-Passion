/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NTKFace, NTKFaceCollection, UIImage;

@protocol NTKLibrarySelectedFaceSnapshotProviderDelegate, OS_dispatch_queue;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject

{
    NTKFaceCollection *_libraryCollection;
    NTKFace *_selectedFace;
    NSString *_snapshotKey;
    NSObject<OS_dispatch_queue> *_snapshotRequestsQueue;
    _Bool _resumedQueue;
    id <NTKLibrarySelectedFaceSnapshotProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate;
@property (nonatomic, readonly) UIImage *snapshotImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)snapshotCurrentFaceForActiveDeviceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)snapshotCurrentFaceForDevice:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)snapshotCurrentFaceForDeviceUUID:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1 delegate:(id)arg2;
- (void)_handleSnapshotChangedNotification:(id)arg1;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)_notifyIfSnapshotAvailable;
- (void)_handleFaceChange:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1;
- (void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
