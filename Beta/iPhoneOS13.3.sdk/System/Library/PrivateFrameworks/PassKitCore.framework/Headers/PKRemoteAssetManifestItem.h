/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface PKRemoteAssetManifestItem : NSObject <Swift>

{
    NSURL *_localURL;
    NSURL *_remoteURL;
    NSURL *_passURL;
    NSString *_sha1Hex;
    NSNumber *_size;
    NSDictionary *_manifest;
}

@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *remoteURL;
@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic) NSString *sha1Hex;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSDictionary *manifest;
@property (nonatomic, readonly) unsigned long long itemType;
@property (weak, nonatomic, readonly) NSString *relativeLocalPath;

+ (_Bool)supportsSecureCoding;
+ (id)sharedURLSession;
+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isZipFile;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;
- (void)downloadAssetWithCompletion:(CDUnknownBlockType)arg1;

@end
