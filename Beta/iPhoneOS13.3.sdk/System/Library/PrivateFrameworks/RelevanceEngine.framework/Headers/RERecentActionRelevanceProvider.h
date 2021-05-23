/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString, RERecentAction;

@interface RERecentActionRelevanceProvider : RERelevanceProvider

{
    NSString *_bundleIdentifier;
    unsigned long long _actionIdentifier;
}

@property (nonatomic, readonly) RERecentAction *recentAction;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long actionIdentifier;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)_hash;
- (id)initWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;

@end
