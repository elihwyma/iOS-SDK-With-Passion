/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSURL;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <Swift>

{
    NSURL *_passURL;
    NSDictionary *_remoteAssetsByTaskIdentifier;
    NSDictionary *_remoteAssetsByRecordName;
}

@property (retain, nonatomic) NSURL *passURL;
@property (retain, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier;
@property (retain, nonatomic) NSDictionary *remoteAssetsByRecordName;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2;
- (void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)arg1;
- (_Bool)hasOutstandingRemoteAssetTasks;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)arg1;

@end
