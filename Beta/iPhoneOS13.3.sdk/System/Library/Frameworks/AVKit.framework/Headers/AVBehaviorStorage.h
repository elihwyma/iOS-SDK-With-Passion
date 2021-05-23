/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface AVBehaviorStorage : NSObject

{
    id _AVKitOwner;
    NSMapTable *_behaviorsAndBehaviorContexts;
}

@property (weak, nonatomic) id AVKitOwner;
@property (nonatomic, readonly) NSMapTable *behaviorsAndBehaviorContexts;

- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
- (id)behaviors;
- (id)initWithAVKitOwner:(id)arg1;
- (void)enumerateAllBehaviorsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllBehaviorsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)behaviorOfClass:(Class)arg1;
- (void)enumerateAllBehaviorContextsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllBehaviorContextsConformingToProtocol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateAllBehaviorContextsImplementingSelector:(SEL)arg1 forProtocol:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)behaviorContextOfClass:(Class)arg1;

@end
