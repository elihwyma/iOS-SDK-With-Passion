/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <AddressBookLegacy/ABVCardParser.h>

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser

{
    NSMutableDictionary *_unknownAttributes;
    _Bool _removeExistingProperties;
    _Bool _localRecordHasAdditionalProperties;
    int _lastCropRectX;
    int _lastCropRectY;
    int _lastCropRectWidth;
    int _lastCropRectHeight;
    NSData *_lastCropRectChecksum;
}

@property (readonly) _Bool localRecordHasAdditionalProperties;
@property (readonly) int lastCropRectX;
@property (readonly) int lastCropRectY;
@property (readonly) int lastCropRectWidth;
@property (readonly) int lastCropRectHeight;
@property (retain, readonly) NSData *lastCropRectChecksum;

- (void)dealloc;
- (id)defaultLabel;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (void)cleanUpCardState;
- (void)setLocalRecordHasAdditionalProperties:(_Bool)arg1;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (id)genericLabel;
- (_Bool)parseUID;
- (id)defaultURLLabel;
- (_Bool)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (void)noteLackOfValueForImageData;
- (id)defaultADRLabel;
- (_Bool)importToPerson:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (_Bool)importToGroup:(void *)arg1 removeExistingProperties:(_Bool)arg2;
- (void *)createRecordInSource:(void *)arg1 outRecordType:(unsigned int *)arg2;

@end
