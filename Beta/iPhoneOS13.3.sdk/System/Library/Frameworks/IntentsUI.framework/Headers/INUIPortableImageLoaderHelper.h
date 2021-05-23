/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UITraitCollection;

@interface INUIPortableImageLoaderHelper : NSObject

{
    UITraitCollection *_traitCollection;
}

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)loadImageDataFromBundle:(id)arg1 withImageName:(id)arg2 accessSpecifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadImageSizeFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
