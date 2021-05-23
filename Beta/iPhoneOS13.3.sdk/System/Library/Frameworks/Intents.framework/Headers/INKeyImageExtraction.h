/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, NSDictionary, NSMutableDictionary, NSString;

@interface INKeyImageExtraction : NSObject <Swift>

{
    NSMutableDictionary *_keyImagesByType;
    long long _imageTypeToStore;
    NSString *_proxyIdentifier;
}

@property (nonatomic, setter=_setImageTypeToStore:) long long _imageTypeToStore;
@property (copy, nonatomic) INImage *keyImage;
@property (copy, nonatomic) NSString *proxyIdentifier;
@property (copy, nonatomic) NSDictionary *keyImagesByType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)storeImageSynchronously:(id)arg1 error:(id *)arg2;
- (id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)canStoreImage:(id)arg1;
- (void)storeImage:(id)arg1 scaled:(_Bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)retrieveImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeImageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
