/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString;

@interface NSGZipDecoder : NSObject

{
    struct z_stream_s _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    _Bool _streamInitialized;
    _Bool _decodedHeader;
    _Bool _finishedInflating;
    _Bool _pad;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)MIMEType;
+ (_Bool)decodeDownloadHeader:(id)arg1 headerLength:(int *)arg2 modificationTime:(unsigned long long *)arg3 filename:(id *)arg4;
+ (_Bool)canDecodeDownloadHeaderData:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)arg1;
- (id)decodeData:(id)arg1;
- (_Bool)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;
- (_Bool)isFinishedDecoding;
- (_Bool)finishDownloadDecoding;

@end
