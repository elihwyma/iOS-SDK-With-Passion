/*
 Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

#import <AppConduit/Swift-Protocol.h>

@class NSArray, NSString, NSUUID;

@protocol ACXSyncedApp <Swift>

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSUUID *databaseUUID;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (copy, nonatomic, readonly) NSArray *counterpartIdentifiers;
@property (nonatomic, readonly) unsigned long long applicationType;
@property (nonatomic, readonly) _Bool isSystemApp;
@property (nonatomic, readonly) _Bool isDeletable;

- (unsigned short)initWithApplicationProxy:databaseUUID:sequenceNumber: /* Error: Ran out of types for this method. */;
- (unsigned short)serializeAsRemoteApplication;

@end
