/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SFUDataRepresentation : NSObject

{
    _Bool mHasHash;
    unsigned int mHash;
    _Bool mHasSha1Hash;
    NSData *mSha1Hash;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isEncrypted;
- (id)inputStream;
- (long long)encodedLength;
- (long long)dataLength;
- (_Bool)isReadable;
- (struct _xmlDoc *)xmlDocument;
- (id)bufferedInputStream;
- (struct CGDataProvider *)cgDataProvider;
- (unsigned long long)readIntoData:(id)arg1;
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;
- (unsigned int)uint32Hash;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;
- (struct _xmlTextReader *)xmlReader;
- (struct _xmlTextReader *)xmlReaderForGzippedData;
- (id)sha1Hash;

@end
