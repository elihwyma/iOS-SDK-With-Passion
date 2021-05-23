/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject

{
    CDUnknownBlockType _purgeBlock;
    NSCountedSet *_entryRetainCounts;
    NSCountedSet *_negativeEntryRetainCounts;
}

@property (copy, nonatomic, readonly) NSSet *retainedKeyStrings;

- (void)_retainEntryForKeyString:(id)arg1;
- (void)_releaseEntryForKeyString:(id)arg1;
- (id)initWithPurgeBlock:(CDUnknownBlockType)arg1;
- (void)retainEntryForKeyString:(id)arg1;
- (void)retainEntriesForKeyStrings:(id)arg1;
- (void)retainEntryWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (void)releaseEntryForKeyString:(id)arg1;
- (void)releaseEntriesForKeyStrings:(id)arg1;
- (void)releaseEntryWithKeyStringProvider:(CDUnknownBlockType)arg1;
- (_Bool)isEntryRetainedForKeyString:(id)arg1;

@end
