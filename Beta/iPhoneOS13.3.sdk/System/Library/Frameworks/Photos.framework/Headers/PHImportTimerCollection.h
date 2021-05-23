/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableIndexSet;

@interface PHImportTimerCollection : NSObject

{
    unsigned char _mediaType;
    unsigned long long _fileSize;
    NSMutableArray *_timers;
    NSMutableIndexSet *_runningTimers;
    unsigned char _aspectRatio;
}

@property unsigned char aspectRatio;

- (id)description;
- (id)initForMediaType:(unsigned char)arg1 fileSize:(unsigned long long)arg2;
- (id)startTiming:(unsigned char)arg1 subtype:(unsigned char)arg2;
- (void)stopTiming:(id)arg1;
- (void)processTimesOfType:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (double)duration:(unsigned char)arg1;

@end
