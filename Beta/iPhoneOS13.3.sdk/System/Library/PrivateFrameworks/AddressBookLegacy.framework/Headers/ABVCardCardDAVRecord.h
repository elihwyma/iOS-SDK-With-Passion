/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <AddressBookLegacy/ABVCardRecord.h>

@interface ABVCardCardDAVRecord : ABVCardRecord

+ (_Bool)includeREVInVCards;
+ (_Bool)includeNotesInVCards;
+ (_Bool)includeImageURIInVCards;
+ (_Bool)includeABClipRectInVCardPhotos;

- (_Bool)useThumbnailImageFormatIfAvailable;

@end
