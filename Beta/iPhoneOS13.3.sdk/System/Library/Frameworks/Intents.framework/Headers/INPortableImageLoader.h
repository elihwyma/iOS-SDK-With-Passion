/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INPortableImageLoaderHelping;

@interface INPortableImageLoader : NSObject <Swift>

{
    NSString *_helperClassName;
    id <INPortableImageLoaderHelping> _helper;
}

@property (copy, nonatomic, setter=_setHelperClassName:) NSString *_helperClassName;
@property (copy, nonatomic) id <INPortableImageLoaderHelping> helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)canLoadImageDataForImage:(id)arg1;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(CDStruct_8caa76fc)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadImageDataFromImage:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
