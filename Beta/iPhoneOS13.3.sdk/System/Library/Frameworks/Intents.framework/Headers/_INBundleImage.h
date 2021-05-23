/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INImage.h>

@class INImageBundle, NSString;

__attribute__((visibility("hidden")))
@interface _INBundleImage : INImage

{
    NSString *_imageName;
    INImageBundle *_imageBundle;
}

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) INImageBundle *imageBundle;

+ (_Bool)supportsSecureCoding;

- (id)_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (id)_bundleIdentifier;
- (id)stringRepresentation;
- (_Bool)_requiresRetrieval;
- (id)_dictionaryRepresentation;
- (id)_bundlePath;
- (void)_setName:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (void)_setBundlePath:(id)arg1;
- (id)_initWithURLRepresentation:(id)arg1;
- (void)_setBundleIdentifier:(id)arg1;
- (id)_URLRepresentation;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithStringRepresentation:(id)arg1;

@end
