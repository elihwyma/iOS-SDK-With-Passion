/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@interface ABVCardExporter : NSObject

+ (id)_vCard21RepresentationOfRecords:(id)arg1;
+ (id)_vCard30RepresentationOfRecords:(id)arg1;
+ (id)vCardRepresentationOfRecords:(id)arg1 mode:(int)arg2;
+ (id)vCardRepresentationOfRecord:(void *)arg1 mode:(int)arg2;

@end
