/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TITransientLexiconManager : NSObject

{
    struct _LXLexicon *_namedEntityLexiconRef;
    struct _LXLexicon *_namedEntityPhraseLexiconRef;
    _Bool _lexiconsLoaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) const struct _LXLexicon *namedEntityLexicon;
@property (nonatomic, readonly) const struct _LXLexicon *namedEntityPhraseLexicon;

+ (id)sharedInstance;
+ (id)getEntries:(struct _LXLexicon *)arg1;
+ (id)singletonInstance;
+ (void)setSharedTITransientLexiconManager:(id)arg1;

- (id)init;
- (void)dealloc;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (void)loadLexicons;
- (_Bool)searchForWord:(id)arg1;
- (_Bool)searchForWordCaseInsensitive:(id)arg1;
- (void)getOnce:(CDUnknownBlockType)arg1;
- (void)debugLogEntities;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)keyboardActivityDidTransition:(id)arg1;
- (_Bool)searchHelper:(struct _LXLexicon *)arg1 forWord:(struct __CFString *)arg2 caseSensitive:(_Bool)arg3;

@end
