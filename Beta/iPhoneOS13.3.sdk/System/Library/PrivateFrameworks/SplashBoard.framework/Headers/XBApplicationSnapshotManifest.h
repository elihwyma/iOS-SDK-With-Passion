/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSString, XBApplicationSnapshotManifestImpl;

@protocol XBApplicationSnapshotManifestDelegate;

@interface XBApplicationSnapshotManifest : NSObject

{
    XBApplicationSnapshotManifestImpl *_manifestImpl;
    id <XBApplicationSnapshotManifestDelegate> _delegate;
}

@property (weak, nonatomic, readonly) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (weak, nonatomic) id <XBApplicationSnapshotManifestDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *containerPath;
@property (copy, nonatomic, readonly) NSString *defaultGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)debugDescription;
+ (void)initialize;
+ (void)deleteAllSystemSnapshots;
+ (unsigned long long)maximumInFlightDataSize;
+ (id)_manifestsByIdentity;

- (void)dealloc;
- (_Bool)_invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithApplicationInfo:(id)arg1;
- (void)deleteAllSnapshots;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (id)initWithContainerIdentity:(id)arg1 store:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 didGenerateImage:(CDUnknownBlockType)arg4 didSaveImage:(CDUnknownBlockType)arg5;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(CDUnknownBlockType)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(CDUnknownBlockType)arg2;
- (void)purgeSnapshotsWithProtectedContent;
- (void)beginSnapshotAccessTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)manifest:(id)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg2;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
