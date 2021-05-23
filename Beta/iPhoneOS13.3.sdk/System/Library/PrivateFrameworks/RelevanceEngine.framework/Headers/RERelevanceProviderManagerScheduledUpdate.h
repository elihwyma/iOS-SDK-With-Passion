/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManagerUpdate.h>

@class NSDate;

@interface RERelevanceProviderManagerScheduledUpdate : RERelevanceProviderManagerUpdate

{
    NSDate *_updateDate;
}

@property (nonatomic, readonly) NSDate *updateDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProvider:(id)arg1 updateDate:(id)arg2;

@end
