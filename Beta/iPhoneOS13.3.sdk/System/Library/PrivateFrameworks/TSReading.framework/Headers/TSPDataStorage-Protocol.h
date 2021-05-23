/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSString, SFUCryptoKey;

@protocol TSPDataStorage <Swift>

@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) _Bool readOnly;
@property (nonatomic, readonly) _Bool needsDownload;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;

- (unsigned short)performIOChannelReadWithAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)bookmarkDataWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)NSDataWithOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)newCGDataProvider;
- (unsigned short)newCGImageSource;
- (unsigned short)AVAssetWithOptions:contentTypeUTI: /* Error: Ran out of types for this method. */;
- (unsigned short)filenameForPreferredFilename: /* Error: Ran out of types for this method. */;
- (unsigned short)isInPackage: /* Error: Ran out of types for this method. */;
- (unsigned short)performReadWithAccessor: /* Error: Ran out of types for this method. */;
- (unsigned short)AVAssetWithOptions:usingResourceLoaderWithContentTypeUTI: /* Error: Ran out of types for this method. */;

@end
