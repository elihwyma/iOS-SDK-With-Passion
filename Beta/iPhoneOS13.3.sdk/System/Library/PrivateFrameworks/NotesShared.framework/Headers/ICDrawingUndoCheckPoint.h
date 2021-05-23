/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString, NSUUID;

@interface ICDrawingUndoCheckPoint : NSObject

{
    struct CGImage *_image;
    NSOrderedSet *_renderedCommands;
    NSUUID *_uuid;
    NSString *_cacheFilename;
    _Bool _isEraseAllCheckPoint;
}

@property (nonatomic) struct CGImage *image;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *cacheFilename;
@property (nonatomic, readonly) NSOrderedSet *renderedCommands;
@property (nonatomic, readonly) _Bool isEraseAllCheckPoint;

+ (unsigned long long)cacheSize;
+ (id)cacheDirectory;
+ (void)deleteAllCacheFiles;

- (void)dealloc;
- (_Bool)isInMemory;
- (void)reloadImage;
- (id)initWithImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 renderedCommands:(id)arg3;
- (void)writeToDiskAndFreeMemory;
- (struct CGImage *)retainedImage;
- (_Bool)ensureCacheDirectoryExists;
- (void)flushFromMemoryIfPossible;

@end
