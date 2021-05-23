/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface CPLResourceIdentity : NSObject

{
    _Bool _available;
    NSURL *_fileURL;
    NSString *_fingerPrint;
    unsigned long long _fileSize;
    NSString *_fileUTI;
    struct CGSize _imageDimensions;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fingerPrint;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) struct CGSize imageDimensions;
@property (nonatomic, getter=isAvailable) _Bool available;
@property (copy, nonatomic) NSString *fileUTI;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id *)arg3;
+ (id)identityForStorageName:(id)arg1;
+ (void)setResourceIdentityImplementation:(Class)arg1;
+ (Class)resourceIdentityImplementation;
+ (Class)_identityImplementationClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)identityForStorage;

@end
