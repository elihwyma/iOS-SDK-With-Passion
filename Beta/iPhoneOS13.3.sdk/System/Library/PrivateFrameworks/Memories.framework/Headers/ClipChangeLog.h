/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class KonaClip, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ClipChangeLog : NSObject

{
    KonaClip *m_clip;
    NSMutableDictionary *m_capturedClipContents;
}

- (void)dealloc;
- (id)description;
- (id)initWithClip:(id)arg1 project:(id)arg2;
- (void)restoreClipInProject:(id)arg1;

@end
