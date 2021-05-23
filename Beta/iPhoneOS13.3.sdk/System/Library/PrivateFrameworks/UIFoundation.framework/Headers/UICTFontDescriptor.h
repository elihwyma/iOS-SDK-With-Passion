/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/UIFontDescriptor.h>

@interface UICTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithFontAttributes:(id)arg1;
+ (id)fontDescriptorWithName:(id)arg1 size:(double)arg2;
+ (id)fontDescriptorWithName:(id)arg1 matrix:(struct CGAffineTransform)arg2;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)retainWeakReference;
- (_Bool)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)fontDescriptorByAddingAttributes:(id)arg1;
- (id)fontAttributes;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)arg1;

@end
