/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@interface NSObject (PFInstanceOnce)

+ (_Bool)currentContextCanExecuteSelector:(SEL)arg1;
+ (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;
+ (void)setExecutionContextCheckForAllInstanceMethods:(int)arg1;
+ (void)setExecutionContextCheckForAllClassMethods:(int)arg1;
+ (void)setExecutionContextCheck:(int)arg1 forInstanceMethod:(SEL)arg2;
+ (void)setExecutionContextCheck:(int)arg1 forClassMethod:(SEL)arg2;
+ (_Bool)implementsInstanceMethod:(SEL)arg1;
+ (_Bool)implementsClassMethod:(SEL)arg1;
+ (Class)implementingClassForInstanceMethod:(SEL)arg1;

- (_Bool)currentContextCanExecuteSelector:(SEL)arg1;
- (void)handleInvalidExecutionContextForSelector:(SEL)arg1 requirement:(int)arg2;
- (id)multicaster:(id)arg1 queueForSelector:(SEL)arg2;
- (void)setAssociatedObject:(id)arg1 forKey:(id)arg2;
- (id)associatedObjectForKey:(id)arg1;

@end
