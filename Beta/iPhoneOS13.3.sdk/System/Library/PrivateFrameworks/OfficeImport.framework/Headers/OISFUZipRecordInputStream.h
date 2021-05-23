/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipRecordInputStream : NSObject

{
    id <OISFUBufferedInputStream> mInput;
    const char *mBuffer;
    long long mBufferStart;
    long long mBufferEnd;
}

- (void)dealloc;
- (id)initWithDataRepresentation:(id)arg1;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3;

@end
