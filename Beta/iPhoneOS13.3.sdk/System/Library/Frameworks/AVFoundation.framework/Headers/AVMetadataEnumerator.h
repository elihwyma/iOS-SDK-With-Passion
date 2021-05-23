/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSEnumerator.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataEnumerator : NSEnumerator

{
    struct OpaqueFigMetadataReader *_reader;
    NSEnumerator *_arrayEnumerator;
    id _key;
    NSString *_keySpace;
    NSLocale *_locale;
    long long _count;
    long long _index;
}

+ (id)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1;
+ (id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;

- (void)dealloc;
- (id)nextObject;
- (void)_setKey:(id)arg1;
- (void)_setLocale:(id)arg1;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1;
- (id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5;
- (void)_setMetadataReader:(struct OpaqueFigMetadataReader *)arg1;
- (void)_setArrayEnumerator:(id)arg1;
- (void)_setKeySpace:(id)arg1;

@end
