/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <AddressBookLegacy/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter

{
    _Bool _recordIsGroup;
    _Bool _importingToExistingGroup;
}

@property _Bool recordIsGroup;

- (void *)valueForProperty:(unsigned int)arg1;
- (_Bool)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (id)imageData;
- (_Bool)propertyIsValidForPerson:(unsigned int)arg1;
- (_Bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (void)_drainExistingProperties;

@end
