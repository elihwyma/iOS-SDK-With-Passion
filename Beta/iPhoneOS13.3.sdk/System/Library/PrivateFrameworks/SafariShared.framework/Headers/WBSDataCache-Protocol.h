/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@protocol WBSDataCacheDelegate;

@protocol WBSDataCache <Swift>

@property (nonatomic, readonly, getter=isTerminating) _Bool terminating;
@property (weak, nonatomic) id <WBSDataCacheDelegate> dataCacheDelegate;

- (unsigned short)reset;
- (unsigned short)setUp;
- (unsigned short)savePendingChangesBeforeTearDown;
- (unsigned short)settingForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setSetting:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)requestEntryForKeyString: /* Error: Ran out of types for this method. */;
- (unsigned short)getEntryURLForKeyString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setEntry:forKeyString:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeEntriesForKeyStrings:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeEntriesForKeyStringsNotIncludedIn:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)entryStateForKeyString: /* Error: Ran out of types for this method. */;

@end
