/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface FPArchivedItemDescriptor : NSObject

{
    NSString *_filePath;
    NSNumber *_fileSize;
    NSString *_typeIdentifier;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *typeIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
