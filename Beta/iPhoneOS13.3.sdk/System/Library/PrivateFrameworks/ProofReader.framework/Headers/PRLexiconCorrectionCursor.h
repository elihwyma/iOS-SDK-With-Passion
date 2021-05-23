/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCorrectionCursor : NSObject

{
    struct _LXCursor *_cursor;
    unsigned long long _replacementsCount;
    unsigned long long _insertionsCount;
    unsigned long long _deletionsCount;
    unsigned long long _transpositionsCount;
    unsigned long long _advancementLength;
}

@property (readonly) struct _LXCursor *cursor;
@property (readonly) unsigned long long replacementsCount;
@property (readonly) unsigned long long insertionsCount;
@property (readonly) unsigned long long deletionsCount;
@property (readonly) unsigned long long transpositionsCount;
@property (readonly) unsigned long long advancementLength;
@property (readonly) unsigned long long totalEdits;
@property (readonly) double prefixProbability;
@property (readonly) unsigned long long errorType;

- (void)dealloc;
- (id)description;
- (id)initWithCursor:(struct _LXCursor *)arg1 replacementsCount:(unsigned long long)arg2 insertionsCount:(unsigned long long)arg3 deletionsCount:(unsigned long long)arg4 transpositionsCount:(unsigned long long)arg5 advancementLength:(unsigned long long)arg6;

@end
