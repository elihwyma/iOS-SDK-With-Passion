/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSFileWatcherFileHandleInfo : NSObject

{
    int fileHandle;
    _Bool closed;
}

@property (readonly) _Bool isDirectory;

+ (id)openFileWithPath:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)close;
- (_Bool)verifyAccessByAuditToken:(CDStruct_4c969caf)arg1;

@end
