/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject

{
    RERelevanceProvider *_provider;
    CDUnknownBlockType _completion;
}

@property (nonatomic, readonly) RERelevanceProvider *provider;
@property (nonatomic, readonly) _Bool allProviders;
@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)immediateUpdateForProvider:(id)arg1;
+ (id)immediateUpdateForAllProviders;
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;
+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProvider:(id)arg1;

@end
