/*
 Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface FirmwareBundle : NSObject

{
    NSString *_bundleDescription;
    unsigned int _productIDCode;
    unsigned int _firmwareImageBaseAddress;
    unsigned int _firmwareImageSize;
    NSData *_firmwareImage;
    NSDictionary *_buildManifest;
    NSData *_hash;
    NSData *_certificate;
    NSData *_signature;
}

@property (readonly) NSData *hash;
@property (readonly) NSData *firmwareImage;
@property (readonly) NSData *signature;
@property (readonly) NSData *certificate;
@property unsigned int productIDCode;
@property (readonly) unsigned int firmwareImageBaseAddress;
@property (readonly) unsigned int firmwareImageSize;
@property (retain, nonatomic) NSDictionary *buildManifest;

+ (id)defaultBundlePath;

- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithData:(id)arg1 hashData:(id)arg2 signatureData:(id)arg3 certData:(id)arg4;
- (void)calculateHash;
- (void)parseFileName:(id)arg1 intoPath:(id *)arg2 andExtension:(id *)arg3;
- (id)parseSRECFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (id)parseMSP430TXTFile:(id)arg1 withDefaultByteValue:(unsigned char)arg2;
- (id)parseResourceFileIntoData:(id)arg1;
- (void)parseSRECLine:(id)arg1 intoImage:(id)arg2;
- (id)initWithBundleName:(id)arg1;

@end
