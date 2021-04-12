//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PRLexiconCorrectionCursor : NSObject
{
    struct _LXCursor _cursor;
    NSUInteger _replacementsCount;
    NSUInteger _insertionsCount;
    NSUInteger _deletionsCount;
    NSUInteger _transpositionsCount;
    NSUInteger _advancementLength;
}

@property(readonly) NSUInteger advancementLength; // @synthesize advancementLength=_advancementLength;
@property(readonly) NSUInteger transpositionsCount; // @synthesize transpositionsCount=_transpositionsCount;
@property(readonly) NSUInteger deletionsCount; // @synthesize deletionsCount=_deletionsCount;
@property(readonly) NSUInteger insertionsCount; // @synthesize insertionsCount=_insertionsCount;
@property(readonly) NSUInteger replacementsCount; // @synthesize replacementsCount=_replacementsCount;
@property(readonly) struct _LXCursor cursor; // @synthesize cursor=_cursor;
@property(readonly) NSUInteger errorType;
@property(readonly) double prefixProbability;
@property(readonly) NSUInteger totalEdits;
- (id)description;
- (void)dealloc;
- (id)initWithCursor:(struct _LXCursor )arg1 replacementsCount:(NSUInteger)arg2 insertionsCount:(NSUInteger)arg3 deletionsCount:(NSUInteger)arg4 transpositionsCount:(NSUInteger)arg5 advancementLength:(NSUInteger)arg6;

@end

