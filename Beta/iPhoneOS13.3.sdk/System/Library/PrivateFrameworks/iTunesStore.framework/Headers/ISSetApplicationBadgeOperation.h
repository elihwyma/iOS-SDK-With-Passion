/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISSetApplicationBadgeOperation

{
    NSString *_badgeValue;
    NSString *_bundleIdentifier;
}

@property (retain) NSString *badgeValue;
@property (retain) NSString *bundleIdentifier;

- (void)run;
- (id)uniqueKey;

@end
