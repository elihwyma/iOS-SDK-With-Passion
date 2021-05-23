/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface TLSystemSound : NSObject

{
    unsigned int _soundID;
    _Bool _shouldDisposeOfSoundID;
    _Bool _requiresLongFormPlayback;
    NSURL *_soundFileURL;
}

@property (nonatomic, readonly) NSURL *soundFileURL;
@property (nonatomic, readonly) unsigned int soundID;
@property (nonatomic, readonly) _Bool requiresLongFormPlayback;

- (void)dealloc;
- (id)description;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2 requiresLongFormPlayback:(_Bool)arg3;

@end
