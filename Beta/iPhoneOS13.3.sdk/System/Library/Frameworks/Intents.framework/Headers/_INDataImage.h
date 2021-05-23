/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INImage.h>

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface _INDataImage : INImage

{
    NSUUID *_sha256HashUUID;
    NSData *_imageData;
}

@property (copy, nonatomic, readonly) NSData *imageData;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (_Bool)_requiresRetrieval;
- (id)_dictionaryRepresentation;
- (id)_imageData;
- (id)initWithImageData:(id)arg1;
- (void)_setImageData:(id)arg1;
- (id)_sha256HashUUID;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (_Bool)_isEligibleForProxying;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
