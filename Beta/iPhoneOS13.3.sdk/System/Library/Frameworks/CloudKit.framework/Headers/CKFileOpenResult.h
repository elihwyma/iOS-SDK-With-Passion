/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSFileHandle, NSNumber;

@interface CKFileOpenResult : NSObject

{
    struct _mkbbackupref *_handle;
    NSFileHandle *_fileHandle;
    NSFileHandle *_encryptedFileHandle;
    NSNumber *_fileSize;
}

@property (nonatomic) struct _mkbbackupref *handle;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSFileHandle *encryptedFileHandle;
@property (retain, nonatomic) NSNumber *fileSize;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMobileKeyBagHandle:(struct _mkbbackupref *)arg1 path:(id)arg2 error:(id *)arg3;

@end
