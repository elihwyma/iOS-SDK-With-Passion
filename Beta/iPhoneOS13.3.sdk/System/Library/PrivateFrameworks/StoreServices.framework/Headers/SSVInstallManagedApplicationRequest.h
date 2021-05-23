/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSRequest.h>

@class NSNumber, NSString;

@interface SSVInstallManagedApplicationRequest : SSRequest

{
    _Bool _skipDownloads;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    NSString *_itemIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) _Bool skipDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(_Bool)arg5;
- (void)startWithDetailedResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithMetadataResponseBlock:(CDUnknownBlockType)arg1;

@end
