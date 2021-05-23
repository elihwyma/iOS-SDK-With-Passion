/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface NSObject (ICLoggable)

+ (id)ic_loggingDescriptionFromLoggable:(id)arg1 isPretty:(_Bool)arg2;

- (id)ic_loggingDescription;
- (id)ic_loggingIdentifier;
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3 explicitOptions:(unsigned long long)arg4;
- (void)ic_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (_Bool)ic_didAddObserverForContext:(void *)arg1 inScope:(char *)arg2;
- (_Bool)ic_shouldIgnoreObserveValue:(id)arg1 ofObject:(id)arg2 forKeyPath:(id)arg3;
- (void)ic_addObserver:(id)arg1 forKeyPath:(id)arg2 context:(CDStruct_91a0c811 *)arg3;
- (id)ic_prettyLoggingDescription;

@end
