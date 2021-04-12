//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/_HKXPCExportable-Protocol.h>

@class HDHealthStoreClient, HKTaskConfiguration, NSArray, NSString, NSUUID;
@protocol HDTaskServerDelegate;

@protocol HDTaskServer <_HKXPCExportable>
+ (NSArray *)requiredEntitlements;
+ (NSString *)taskIdentifier;
- (NSUUID *)taskUUID;
- (id)initWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4;

@optional
+ (BOOL)validateConfiguration:(HKTaskConfiguration *)arg1 client:(HDHealthStoreClient *)arg2 error:(id )arg3;
+ (id)createTaskServerWithUUID:(NSUUID *)arg1 configuration:(HKTaskConfiguration *)arg2 client:(HDHealthStoreClient *)arg3 delegate:(id <HDTaskServerDelegate>)arg4 error:(id )arg5;
+ (Class)configurationClass;
@end

