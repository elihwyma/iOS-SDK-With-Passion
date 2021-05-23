/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface _NSCallStackArray : NSArray

{
    void **_frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    char **_pcstrs;
    _Bool _wantSyms;
}

+ (id)arrayWithFrames:(void **)arg1 count:(unsigned long long)arg2 symbols:(_Bool)arg3;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;

@end
