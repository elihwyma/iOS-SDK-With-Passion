/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCIntAndZoneJobIdentifier.h>

__attribute__((visibility("hidden")))
@interface BRCApplyJobIdentifier : BRCIntAndZoneJobIdentifier

- (long long)rank;
- (id)initWithRank:(long long)arg1 zoneRowID:(id)arg2;
- (long long)rejectedRowID;
- (long long)serverItemRank;

@end
