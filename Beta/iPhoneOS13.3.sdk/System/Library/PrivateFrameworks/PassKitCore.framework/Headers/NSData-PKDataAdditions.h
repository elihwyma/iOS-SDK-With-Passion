/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSData.h>

@interface NSData (PKDataAdditions)

+ (id)dataWithCGImage:(struct CGImage *)arg1;

- (id)hexEncoding;
- (id)SHA256Hash;
- (id)SHA1Hash;
- (id)fileSafeBase64Encoding;
- (_Bool)hasPDFMIMEType;

@end
