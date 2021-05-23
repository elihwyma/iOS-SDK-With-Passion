/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface _CopyfileCallbackCtx : NSObject

{
    _Bool _doArchive;
    _Bool _doUnarchive;
    NSProgress *_progress;
    unsigned long long _generationSize;
}

@property (nonatomic) _Bool doArchive;
@property (nonatomic) _Bool doUnarchive;
@property (nonatomic) unsigned long long generationSize;
@property (nonatomic, readonly) NSProgress *progress;

- (id)initWithPath:(const char *)arg1 error:(id *)arg2;

@end
