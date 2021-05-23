/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

#import <RelevanceEngine/REElementUpdateOperation.h>

@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation

{
    unsigned long long _updateType;
}

@property (nonatomic, readonly) unsigned long long updateType;

+ (id)hideElement:(id)arg1 atPath:(id)arg2;
+ (id)showElement:(id)arg1 atPath:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
