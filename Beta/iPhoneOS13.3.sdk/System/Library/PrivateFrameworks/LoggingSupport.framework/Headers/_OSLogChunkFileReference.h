/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class _OSLogCollectionReference;

__attribute__((visibility("hidden")))
@interface _OSLogChunkFileReference : NSObject

{
    _OSLogCollectionReference *_oslcr;
    char *_path;
    unsigned long long _xot;
    unsigned long long _xet;
}

@property (nonatomic, readonly) char *path;
@property (nonatomic, readonly) unsigned long long xattrOldestTime;
@property (nonatomic, readonly) unsigned long long xattrEndTime;

- (void)dealloc;
- (id)initWithCollection:(id)arg1 subpath:(const char *)arg2;
- (_Bool)readXattrForTimespan:(id *)arg1;
- (id)copyMappedChunkFile:(id *)arg1;

@end
