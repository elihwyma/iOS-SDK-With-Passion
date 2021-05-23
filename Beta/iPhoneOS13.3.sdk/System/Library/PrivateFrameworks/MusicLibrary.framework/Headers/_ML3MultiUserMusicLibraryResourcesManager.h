/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>

@class NSObject, NSString;

@protocol MLMediaLibraryResourcesServiceProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager

{
    NSString *_cachedLibraryContainerPath;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MLMediaLibraryResourcesServiceProtocol> _libraryResourcesServices;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id <MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices;
@property (copy, nonatomic) NSString *cachedLibraryContainerPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)libraryContainerPath;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)initWithLibraryResourcesService:(id)arg1;

@end
