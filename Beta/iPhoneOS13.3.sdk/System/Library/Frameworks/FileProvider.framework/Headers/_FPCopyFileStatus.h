/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSProgress;

__attribute__((visibility("hidden")))
@interface _FPCopyFileStatus : NSObject

{
    NSProgress *_progress;
    NSMutableDictionary *_lastBytesCopiedByFile;
}

@property (retain) NSProgress *progress;
@property (retain) NSMutableDictionary *lastBytesCopiedByFile;

- (id)init;
- (void)updateCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)beginCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;
- (void)finishCopyingFile:(id)arg1 state:(struct _copyfile_state *)arg2;

@end
