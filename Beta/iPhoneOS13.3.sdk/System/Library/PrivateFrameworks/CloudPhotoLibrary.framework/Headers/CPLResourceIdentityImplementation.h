/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLResourceIdentity.h>

@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (void)setMMCImplementationForPlatform:(id)arg1;
+ (id)_fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)zeroByteFileFingerPrint;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id *)arg3;
+ (id)identityForStorageName:(id)arg1;

- (id)identityForStorage;

@end
