/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementAction.h>

@class NSString, NSUserActivity;

@interface REElementUserActivityAction : REElementAction

{
    NSUserActivity *_userActivity;
    NSString *_applicationID;
}

@property (copy, nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSString *applicationID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_performWithContext:(id)arg1;
- (void)_submitMetricsWithSuccess:(_Bool)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2;

@end
