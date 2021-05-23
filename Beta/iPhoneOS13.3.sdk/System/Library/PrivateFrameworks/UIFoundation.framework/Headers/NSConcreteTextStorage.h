/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextStorage.h>

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage

{
    NSConcreteNotifyingMutableAttributedString *_contents;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _lock;
    struct {
        unsigned int _forceFixAttributes:1;
        unsigned int _needLock:1;
        unsigned int _lockInitialized:1;
        unsigned int _inFixingAttributes:1;
        unsigned int _reserved:28;
    } _pFlags;
}

+ (unsigned long long)_writerCountTSDKey;

- (id)init;
- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (Class)classForCoder;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributedString:(id)arg1;
- (_Bool)_lockForReading;
- (void)_unlock;
- (void)_setForceFixAttributes:(_Bool)arg1;
- (_Bool)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(_Bool)arg1;
- (_Bool)_lockForWritingWithExceptionHandler:(_Bool)arg1;
- (_Bool)fixesAttributesLazily;
- (_Bool)_forceFixAttributes;
- (void)_initLocks;

@end
