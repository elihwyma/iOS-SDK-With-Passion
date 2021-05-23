/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@interface ABVCardValueSetter : NSObject

- (id)fullName;
- (void *)valueForProperty:(unsigned int)arg1;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (id)imageData;
- (_Bool)setImageData:(id)arg1;
- (_Bool)propertyIsValidForPerson:(unsigned int)arg1;
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;

@end
