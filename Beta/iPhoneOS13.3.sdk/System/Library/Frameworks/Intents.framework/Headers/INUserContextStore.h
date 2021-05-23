/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class CKKnowledgeStore;

@interface INUserContextStore : NSObject

{
    CKKnowledgeStore *_knowledgeStore;
}

+ (id)sharedStore;
+ (id)findDataInValue:(id)arg1;
+ (id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2;

- (id)_init;
- (void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2;
- (void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_initWithKnowledgeStore:(id)arg1;

@end
