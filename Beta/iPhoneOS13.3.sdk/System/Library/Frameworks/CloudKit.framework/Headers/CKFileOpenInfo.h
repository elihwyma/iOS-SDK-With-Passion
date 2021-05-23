/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSFileHandle, NSNumber, NSString;

@interface CKFileOpenInfo : NSObject

{
    _Bool _shouldReadRawEncryptedData;
    NSString *_UUID;
    NSString *_path;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSFileHandle *_clientOpenedFileHandle;
}

@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (nonatomic) _Bool shouldReadRawEncryptedData;
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)CKPropertiesDescription;

@end
