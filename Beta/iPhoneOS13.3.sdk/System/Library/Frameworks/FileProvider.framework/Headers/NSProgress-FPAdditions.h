/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProgress.h>

#import <FileProvider/Swift-Protocol.h>

@interface NSProgress (FPAdditions) <Swift>

- (_Bool)fp_isOfFileOperationKind:(id)arg1;
- (void)fp_addChildProgress:(id)arg1;
- (id)fp_fileOperationKind;
- (void)fp_setFileOperationKind:(id)arg1;

@end
