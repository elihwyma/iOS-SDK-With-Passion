/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, SKUIArtwork, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryDescriptor : NSObject

{
    long long _entryDescriptorType;
    SKUIArtwork *_artwork;
    NSAttributedString *_attributedString;
    UIImage *_image;
    long long _visibilityPriority;
    struct CGSize _size;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (nonatomic) long long entryDescriptorType;
@property (retain, nonatomic) SKUIArtwork *artwork;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (nonatomic) long long visibilityPriority;

+ (id)entryDescriptorWithArtwork:(id)arg1;
+ (id)entryDescriptorWithAttributedString:(id)arg1;
+ (id)entryDescriptorWithImage:(id)arg1;
+ (id)placeholderEntryDescriptorWithSize:(struct CGSize)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
