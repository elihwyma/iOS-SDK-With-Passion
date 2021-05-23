/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

#import <AvatarUI/Swift-Protocol.h>

@class NSPersistentContainer, NSString;

@protocol AVTAvatarsDaemon, AVTUILogger;

@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <Swift>

{
    NSPersistentContainer *_container;
    id <AVTUILogger> _logger;
    id <AVTAvatarsDaemon> _daemonClient;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTAvatarsDaemon> daemonClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createContainerForRemoteConfiguration;

- (id)persistentStoreCoordinator;
- (_Bool)setupIfNeeded:(id *)arg1;
- (id)createManagedObjectContext;
- (id)storeDescription;
- (id)initWithDaemonClient:(id)arg1 environment:(id)arg2;

@end
