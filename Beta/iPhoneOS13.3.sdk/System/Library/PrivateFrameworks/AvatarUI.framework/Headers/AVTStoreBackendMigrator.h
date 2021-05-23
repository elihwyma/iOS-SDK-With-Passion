/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTCoreEnvironment, NSString;

@protocol AVTUILogger;

@interface AVTStoreBackendMigrator : NSObject

{
    id <AVTUILogger> _logger;
    AVTCoreEnvironment *_environment;
}

@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEnvironment:(id)arg1;
- (id)updatedRecordsForMigratingRecords:(id)arg1 source:(id)arg2 destinationBackend:(id)arg3 error:(id *)arg4;
- (_Bool)migrateContentFromSource:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;

@end
