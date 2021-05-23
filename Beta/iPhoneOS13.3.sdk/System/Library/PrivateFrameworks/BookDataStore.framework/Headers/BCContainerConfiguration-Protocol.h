/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class MISSING_TYPE, NSArray, NSString;

@protocol BCContainerConfiguration <Swift>

@property (nonatomic, readonly) NSString *queueIdentifier;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSArray *appZones;
@property (nonatomic, readonly) NSArray *serviceZones;
@property (nonatomic, readonly) NSString *dbArchiveFolderName;
@property (nonatomic, readonly) NSString *dbArchiveExtension;
@property (nonatomic, readonly) NSString *dbArchiveFilename;
@property (nonatomic, readonly) NSString *dbSubscriptionID;
@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) _Bool requiresDeviceToDeviceEncryption;

+ (MISSING_TYPE *)configuration;

- (MISSING_TYPE *)shouldArchiveData: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)shouldPerformDatabaseSubscriptionForServiceMode: /* Error: Ran out of types for this method. */;

@end
