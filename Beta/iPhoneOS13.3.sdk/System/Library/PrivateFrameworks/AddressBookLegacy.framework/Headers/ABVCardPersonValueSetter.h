/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <AddressBookLegacy/ABVCardValueSetter.h>

@interface ABVCardPersonValueSetter : ABVCardValueSetter

{
    void *_person;
    struct __CFArray *_properties;
}

+ (struct __CFArray *)supportedProperties;

- (void)dealloc;
- (id)fullName;
- (void *)valueForProperty:(unsigned int)arg1;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (id)imageData;
- (id)initWithPerson:(void *)arg1;
- (struct __CFArray *)foundProperties;
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;

@end
