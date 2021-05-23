/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ESDBlipContext : NSObject

{
    struct SsrwOOStream *mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct SsrwOOStream *)stream;
- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4;
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (id)dataRep;

@end
