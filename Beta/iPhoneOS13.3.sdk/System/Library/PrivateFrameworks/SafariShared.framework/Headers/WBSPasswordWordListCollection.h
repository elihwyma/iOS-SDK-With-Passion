/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject

{
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasswordWordListCollection;
+ (id)commonPasscodeWordListCollection;

- (id)init;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)entriesForString:(id)arg1;
- (void)addWordList:(id)arg1;

@end
