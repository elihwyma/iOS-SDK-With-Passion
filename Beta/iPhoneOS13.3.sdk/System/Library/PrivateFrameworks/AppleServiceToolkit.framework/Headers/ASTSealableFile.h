/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface ASTSealableFile : NSObject

{
    NSURL *_fileURL;
    _Bool _sealed;
    NSString *_base64Signature;
    NSData *_signature;
}

@property (retain, nonatomic) NSString *base64Signature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic, getter=isSealed) _Bool sealed;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)sealedFileURL:(id)arg1 signature:(id)arg2;

- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (_Bool)sealWithFileSigner:(CDUnknownBlockType)arg1 error:(id *)arg2;

@end
