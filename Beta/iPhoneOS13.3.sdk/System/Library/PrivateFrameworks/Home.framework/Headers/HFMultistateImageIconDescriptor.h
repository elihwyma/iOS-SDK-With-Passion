/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFImageIconDescriptor.h>

@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

{
    NSDictionary *_imageIdentifiersKeyedByPrimaryState;
}

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 defaultImageIdentifier:(id)arg2;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1;
- (id)imageIdentifierForPrimaryState:(long long)arg1;

@end
