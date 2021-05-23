/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSData.h>

@class NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface _NSDataFileBackedFuture : NSData

{
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    unsigned long long _fileSize;
    NSUUID *_uuid;
    NSData *_realData;
    NSData *_bytes;
}

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;
@property (retain, readonly) NSURL *_fileURLForSaving;
@property (retain) NSURL *originalFileURL;

+ (_Bool)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;

- (void)dealloc;
- (unsigned long long)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (const void *)bytes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (Class)classForArchiver;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2;
- (id)_storeMetadata;
- (void *)_bytesPtrForStore;
- (unsigned long long)_bytesLengthForStore;
- (id)initWithStoreMetadata:(id)arg1 directory:(id)arg2 originalFileURL:(id)arg3;
- (_Bool)_isCloudKitSupportOriginated;
- (id)initWithURL:(id)arg1 UUID:(id)arg2 size:(unsigned long long)arg3;
- (id)initWithDirectoryURL:(id)arg1 UUID:(id)arg2 originalURL:(id)arg3;
- (id)initWithURLForSaving:(id)arg1;
- (_Bool)_evictFile:(id *)arg1;
- (id)fileURLNoReally;
- (id)_interimLocationURL;
- (id)_underlyingData;
- (void)_setStoreMetadata:(id)arg1;
- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;

@end
