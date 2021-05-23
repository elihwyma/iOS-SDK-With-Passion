/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSOperation.h>

@class PSSearchEntry;

@protocol PSSearchIndexOperationDelegate;

@interface PSSearchIndexOperation : NSOperation

{
    PSSearchEntry *_searchEntry;
    id <PSSearchIndexOperationDelegate> _delegate;
}

@property (nonatomic, readonly) PSSearchEntry *searchEntry;
@property (weak) id <PSSearchIndexOperationDelegate> delegate;

+ (id)_bundleForSearchEntry:(id)arg1 thirdPartyApp:(_Bool *)arg2;
+ (id)_loadThirdPartySearchEntriesForEntry:(id)arg1 bundle:(id)arg2;
+ (id)_loadSearchEntriesFromPlistForEntry:(id)arg1 bundle:(id)arg2;
+ (id)topLevelManifestBundlePath;
+ (id)possibleBundleRoots;
+ (void)setPossibleBundleRoots:(id)arg1;
+ (void)setTopLevelManifestBundlePath:(id)arg1;

- (void)dealloc;
- (void)main;
- (void)_cancel;
- (id)initWithSearchEntry:(id)arg1 delegate:(id)arg2;
- (void)_finishedIndexingWithEntries:(id)arg1 cancelled:(_Bool)arg2;

@end
