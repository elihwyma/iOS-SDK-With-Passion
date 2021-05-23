/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface HKCDADocument : NSObject

{
    NSData *_internalDocumentData;
    NSData *_compressedDocumentData;
    NSString *_title;
    NSString *_patientName;
    NSString *_authorName;
    NSString *_custodianName;
}

@property (copy, readonly) NSData *documentData;
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSString *patientName;
@property (copy, readonly) NSString *authorName;
@property (copy, readonly) NSString *custodianName;

- (id)description;
- (id)_validateConfiguration;
- (_Bool)_compressDocumentDataForTransfer:(id *)arg1;
- (_Bool)_decompressDocumentDataForDelivery:(id *)arg1;
- (id)initWithDocumentData:(id)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6;
- (id)initWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (void)encodeWithCoder:(id)arg1 omittedContentFlags:(long long)arg2;
- (id)_descriptionFieldTitle:(id)arg1 content:(id)arg2 maxSize:(unsigned long long)arg3;
- (id)_compressedDocumentData;

@end
