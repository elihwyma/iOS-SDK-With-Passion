/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSEnumerator.h>

@interface VCSYChangeEnumerator : NSEnumerator

{
    NSEnumerator *_enumerator;
    unsigned long long _count;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithLazyArray:(id)arg1;

@end
