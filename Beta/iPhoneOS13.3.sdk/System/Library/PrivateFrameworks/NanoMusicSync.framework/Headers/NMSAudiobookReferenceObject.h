/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface NMSAudiobookReferenceObject : NSObject

{
    NSNumber *_audiobookIdentifier;
    unsigned long long _downloadLimit;
}

@property (nonatomic, readonly) NSNumber *audiobookIdentifier;
@property (nonatomic) unsigned long long downloadLimit;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithAudiobookIdentifier:(id)arg1 downloadLimit:(unsigned long long)arg2;
- (id)audiobookMediaItem;

@end
