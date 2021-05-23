/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, SFUCryptoKey;

@interface TSPFileDataStorage : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *documentResourceLocator;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) _Bool readOnly;
@property (nonatomic, readonly) _Bool needsDownload;
@property (nonatomic, readonly) SFUCryptoKey *decryptionKey;

- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)filenameForPreferredFilename:(id)arg1;
- (_Bool)isInPackage:(id)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;

@end
