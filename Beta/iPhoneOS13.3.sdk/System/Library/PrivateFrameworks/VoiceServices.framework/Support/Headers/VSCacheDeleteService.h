/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@interface VSCacheDeleteService : NSObject

- (long long)totalSizeOfAssets:(id)arg1;
- (id)purgeableVoiceAssetsWithInfo:(id)arg1 urgency:(int)arg2;
- (id)purgeImpl:(id)arg1 urgency:(int)arg2;
- (id)purgeable:(id)arg1 urgency:(int)arg2;
- (id)purge:(id)arg1 urgency:(int)arg2;
- (id)periodic:(id)arg1 urgency:(int)arg2;
- (_Bool)registerCacheDelete;

@end
