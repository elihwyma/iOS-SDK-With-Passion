/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INImage.h>

@class NSString;

@interface INRemoteImageProxy : INImage

{
    NSString *_storageServiceIdentifier;
    NSString *_proxyIdentifier;
}

@property (copy, nonatomic, setter=_setProxyIdentifier:) NSString *_proxyIdentifier;
@property (copy, nonatomic, setter=_setStorageServiceIdentifier:) NSString *_storageServiceIdentifier;
@property (nonatomic, readonly) _Bool isValid;

+ (_Bool)supportsSecureCoding;
+ (void)requestProxyByStoringImage:(id)arg1 qualityOfService:(unsigned int)arg2 scaled:(_Bool)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)proxyImageSynchronously:(id)arg1 usingService:(id)arg2 error:(id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (id)_dictionaryRepresentation;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (void)purgeStoredImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)unproxyImageFromService:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)retrieveProxiedImageSynchronouslyUsingService:(id)arg1 error:(id *)arg2;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
