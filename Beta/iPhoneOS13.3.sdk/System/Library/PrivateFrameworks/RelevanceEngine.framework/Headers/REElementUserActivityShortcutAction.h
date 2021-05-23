/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementUserActivityAction.h>

@interface REElementUserActivityShortcutAction : REElementUserActivityAction

{
    _Bool _isLocalDonation;
}

@property (nonatomic, readonly) _Bool isLocalDonation;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_submitMetricsWithSuccess:(_Bool)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2 isLocalDonation:(_Bool)arg3;

@end
