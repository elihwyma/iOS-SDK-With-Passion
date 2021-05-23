/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TITransientLexiconManaging <Swift>

@property (nonatomic, readonly) const struct _LXLexicon *namedEntityLexicon;
@property (nonatomic, readonly) const struct _LXLexicon *namedEntityPhraseLexicon;

- (unsigned short)addContactObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeContactObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)loadLexicons;
- (unsigned short)searchForWord: /* Error: Ran out of types for this method. */;
- (unsigned short)searchForWordCaseInsensitive: /* Error: Ran out of types for this method. */;
- (unsigned short)getOnce: /* Error: Ran out of types for this method. */;
- (unsigned short)debugLogEntities;

@end
