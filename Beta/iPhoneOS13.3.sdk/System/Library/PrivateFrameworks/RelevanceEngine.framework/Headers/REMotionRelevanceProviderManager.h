/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/Swift-Protocol.h>

@class NSString;

@interface REMotionRelevanceProviderManager : RERelevanceProviderManager <Swift>

{
    unsigned long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long motionType;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (id)initWithQueue:(id)arg1;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (void)predictorDidUpdate:(id)arg1;

@end
