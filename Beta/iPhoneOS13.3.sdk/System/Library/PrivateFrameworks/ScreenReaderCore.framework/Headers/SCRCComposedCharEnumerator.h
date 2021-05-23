/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSEnumerator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCComposedCharEnumerator : NSEnumerator

{
    _Bool _done;
    NSString *_string;
    unsigned long long _indexOfCurrentComposedCharacter;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithString:(id)arg1;

@end
