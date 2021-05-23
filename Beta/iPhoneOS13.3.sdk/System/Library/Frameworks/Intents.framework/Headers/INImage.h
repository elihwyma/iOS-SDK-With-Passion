/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSData, NSString, NSURL;

@interface INImage : NSObject <Swift>

{
    NSString *_identifier;
    CDStruct_8caa76fc _imageSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *cacheIdentifier;
@property (nonatomic, readonly) _Bool _isEligibleForProxying;
@property (nonatomic, readonly) _Bool _isSupportedForDonation;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (copy, nonatomic, setter=_setImageData:) NSData *_imageData;
@property (copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property (copy, nonatomic, setter=_setBundleIdentifier:) NSString *_bundleIdentifier;
@property (nonatomic, setter=_setImageSize:) CDStruct_8caa76fc _imageSize;
@property (nonatomic, readonly) _Bool _requiresRetrieval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)imageNamed:(id)arg1;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (void)registerImageLoadersOnce;
+ (id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (id)_bundleImageWithURL:(id)arg1;
+ (id)_classesInCluster;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dictionaryRepresentation;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1 withMetadata:(id)arg2;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_initWithData:(id)arg1;
- (void)_requestProxy:(CDUnknownBlockType)arg1;
- (id)_preferredImageLoader;
- (id)_URLRepresentation;
- (id)_descriptionAtIndent:(unsigned long long)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_in_writeableFilePersistenceConfigurationForStoreType:(unsigned long long)arg1;
- (id)_in_downscaledImageForFilePersistence;

@end
