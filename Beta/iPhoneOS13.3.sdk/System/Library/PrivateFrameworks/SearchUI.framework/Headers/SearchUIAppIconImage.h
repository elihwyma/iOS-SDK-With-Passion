/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

{
    NSString *_bundleIdentifier;
    unsigned long long _variant;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long variant;

+ (struct CGSize)sizeForVariant:(unsigned long long)arg1;
+ (id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
+ (double)cornerRadiusForVariant:(unsigned long long)arg1;
+ (id)descriptorNameForVariant:(unsigned long long)arg1;
+ (int)iconFormatForVariant:(unsigned long long)arg1;
+ (id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)loadImage;
- (id)uiImage;
- (void)setUiImage:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
- (id)generateImageWithFormat:(int)arg1;
- (_Bool)needsTinting;

@end
