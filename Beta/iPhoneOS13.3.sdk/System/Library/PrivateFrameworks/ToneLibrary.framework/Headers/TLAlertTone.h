/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSURL, TLSystemSound;

@interface TLAlertTone : NSObject

{
    unsigned int _actualSoundID;
    unsigned int _previewSoundID;
    TLSystemSound *_actualSound;
    TLSystemSound *_previewSound;
    _Bool _requiresLongFormPlayback;
    NSURL *_soundFileURL;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) TLSystemSound *actualSound;
@property (nonatomic, readonly) TLSystemSound *previewSound;
@property (nonatomic, readonly) _Bool requiresLongFormPlayback;

- (id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned int)arg2 previewSoundID:(unsigned int)arg3 requiresLongFormPlayback:(_Bool)arg4;

@end
