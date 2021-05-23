/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INImage.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _INURLImage : INImage

{
    NSData *_sandboxExtensionData;
    NSURL *_imageURL;
}

@property (copy, nonatomic, readonly) NSURL *imageURL;
@property (copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (_Bool)_requiresRetrieval;
- (id)_uri;
- (id)_dictionaryRepresentation;
- (id)initWithImageURL:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (_Bool)_isEligibleForProxying;
- (void)_setUri:(id)arg1;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (_Bool)_isSupportedForDonation;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
