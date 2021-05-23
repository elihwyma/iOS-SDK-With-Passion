/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCPersistedState.h>

__attribute__((visibility("hidden")))
@interface BRCClientRanksPersistedState : BRCPersistedState

{
    unsigned long long _nextItemRowID;
    unsigned long long _nextNotifRank;
    unsigned long long _nextPackageItemRank;
}

@property (nonatomic, readonly) unsigned long long nextItemRowID;
@property (nonatomic) unsigned long long nextNotifRank;
@property (nonatomic) unsigned long long nextPackageItemRank;

+ (_Bool)supportsSecureCoding;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)allocateNotifRank;
- (unsigned long long)allocateItemRowID;
- (unsigned long long)allocatePackageItemRank;

@end
