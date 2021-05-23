/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction

{
    CDUnknownBlockType _action;
}

@property (nonatomic, readonly) CDUnknownBlockType action;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAction:(CDUnknownBlockType)arg1;
- (void)_performWithContext:(id)arg1;

@end
