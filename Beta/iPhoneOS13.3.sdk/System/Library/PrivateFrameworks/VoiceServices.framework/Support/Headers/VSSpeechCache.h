/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VSSpeechCache : NSObject

{
    NSString *_dirPath;
    NSString *_preinstalledCacheDir;
}

@property (retain, nonatomic) NSString *dirPath;
@property (retain, nonatomic) NSString *preinstalledCacheDir;

+ (id)defaultCacheStore;

- (void)cleanCache;
- (id)initWithStorePath:(id)arg1;
- (void)deleteCache;
- (id)preinstalledCacheForText:(id)arg1 language:(id)arg2 gender:(long long)arg3;
- (id)addCache:(id)arg1;
- (id)cacheDataForKey:(id)arg1;
- (_Bool)isPreinstalledCacheAvailableForRequest:(id)arg1;
- (unsigned long long)totalCacheSize;

@end
