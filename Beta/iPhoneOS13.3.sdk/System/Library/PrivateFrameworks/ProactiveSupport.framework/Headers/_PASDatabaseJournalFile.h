/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PASDatabaseJournalFile : NSObject

{
    NSString *_path;
    unsigned long long _len;
    unsigned long long _readCursor;
    int _fd;
    _Bool _written;
    _Bool _dead;
}

@property (nonatomic, readonly) _Bool isFullyRead;
@property (nonatomic, readonly) _Bool isAlive;
@property (nonatomic, readonly) unsigned long long length;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)clear;
- (id)initWithPath:(id)arg1;
- (void)destroy;
- (void)write:(id)arg1;
- (void)destroyAndUnlinkIfEmpty;
- (id)read;
- (void)unlink;

@end
