/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol;

@interface ML3MusicLibraryResourcesManagerContext : NSObject

{
    _Bool _runningInDaemon;
    _Bool _multiUserSupported;
    id <MLMediaLibraryResourcesServiceProtocol> _resourcesService;
    id <ML3AccountInformationProviding> _accountInfo;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
    NSString *_libraryContainerIdentifier;
}

@property (nonatomic, readonly, getter=isRunningInDaemon) _Bool runningInDaemon;
@property (nonatomic, readonly, getter=isMultiUserSupported) _Bool multiUserSupported;
@property (nonatomic, readonly) id <MLMediaLibraryResourcesServiceProtocol> resourcesService;
@property (nonatomic, readonly) id <ML3AccountInformationProviding> accountInfo;
@property (nonatomic, readonly) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (nonatomic, readonly) NSString *libraryContainerIdentifier;

+ (id)contextForAutoupdatingSharedLibrary;
+ (id)contextForSingleUserLibraryWithAccountInfo:(id)arg1;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg1;
+ (id)contextForMultiUserFrameworkLibraryWithService:(id)arg1;
+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;

- (id)_initWithResourcesService:(id)arg1 accountInfo:(id)arg2 libraryContainerIdentifier:(id)arg3 accountChangeObserver:(id)arg4 supportsMultiUsers:(_Bool)arg5 runningInDaemon:(_Bool)arg6;

@end
