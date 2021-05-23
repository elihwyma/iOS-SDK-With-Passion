/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSNumber;

@interface CKFileMetadata : NSObject

{
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSNumber *_modTimeInSeconds;
    NSNumber *_fileSize;
}

@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSNumber *modTimeInSeconds;
@property (retain, nonatomic) NSNumber *fileSize;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
