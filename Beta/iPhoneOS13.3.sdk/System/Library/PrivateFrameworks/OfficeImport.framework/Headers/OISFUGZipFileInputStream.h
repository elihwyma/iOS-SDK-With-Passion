/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUGZipFileInputStream : NSObject <Swift>

{
    int _fd;
    struct gzFile_s *_file;
    _Bool _isCachingDisabled;
    long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (id)initWithPath:(id)arg1;
- (long long)offset;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;

@end
