/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface UIFontDescriptor : NSObject

{
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property (nonatomic, readonly) NSString *postscriptName;
@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) struct CGAffineTransform matrix;
@property (nonatomic, readonly) unsigned int symbolicTraits;
@property (nonatomic, readonly) NSDictionary *fontAttributes;

+ (_Bool)supportsSecureCoding;
+ (id)_createMungledDictionary:(id)arg1;
+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1;
+ (id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 options:(unsigned long long)arg3;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)_attributes;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1;
- (id)fontDescriptorWithFamily:(id)arg1;
- (id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithFontAttributes:(id)arg1;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)arg1 mask:(unsigned int)arg2;
- (id)fontDescriptorWithSize:(double)arg1;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform)arg1;
- (id)fontDescriptorWithFace:(id)arg1;
- (id)fontDescriptorWithDesign:(id)arg1;
- (id)_visibleName;

@end
