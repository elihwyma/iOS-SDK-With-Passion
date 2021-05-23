/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@protocol HDSyncEntityProvider <Swift>

@property (copy, nonatomic, readonly) NSString *syncSchemaIdentifier;

- (unsigned short)orderedSyncEntities;

@end
