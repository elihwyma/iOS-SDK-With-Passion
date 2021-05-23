/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface NSObject (Subclass)

@property (nonatomic, readonly) Class tmlSuperClass;
@property (copy, nonatomic) NSString *tmlIdentifier;
@property (copy, nonatomic) NSString *tmlState;
@property (weak, nonatomic) id tmlParent;
@property (nonatomic, readonly) NSArray *tmlChildren;

+ (void)tmlLoadCategory;
+ (_Bool)subclassInstance:(id)arg1;
+ (void)tmlMakeJSObjectClass;
+ (_Bool)tmlIsJSObjectClass;
+ (id)tmlLoadObjectFromPath:(id)arg1;

- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2;
- (void)tmlDispose;
- (id)metaObjects;
- (id)tmlValueForKeyPath:(id)arg1;
- (id)tmlStateForName:(id)arg1;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)tmlIsKindOfClass:(Class)arg1;
- (_Bool)emitTMLSignal:(id)arg1 withArguments:(id)arg2 returnValue:(id *)arg3;
- (void)registerAspect:(id)arg1;
- (void)unregisterAspect:(id)arg1;
- (void)addTmlChild:(id)arg1;
- (id)tmlDefaultState;
- (void)setTMLSignalHandler:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)setTMLHandler:(id)arg1 forSignal:(id)arg2;
- (void)willEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 newArguments:(id *)arg3;
- (_Bool)didEmitSignalOrMethod:(id)arg1 withArguments:(id)arg2 returnValue:(id)arg3 newReturnValue:(id *)arg4;
- (id)tmlGetMethod:(id)arg1 throwIfMissing:(_Bool)arg2;
- (id)tmlInvokeMethodCall:(id)arg1 withArguments:(id)arg2;
- (id)getAspectsForSignalName:(id)arg1 advice:(int)arg2 createStorageIfMissing:(_Bool)arg3;
- (id)strongObjectsArray:(id)arg1;
- (id)tmlGetMethod:(id)arg1;
- (id)tmlSignalHandlerForSignal:(id)arg1;
- (id)tmlClass;
- (_Bool)setTMLOwnerContext:(id)arg1;
- (_Bool)hasTMLOwnerContext:(id)arg1;
- (void)setTMLValue:(id)arg1 forKey:(id)arg2;
- (id)tmlValueForKey:(id)arg1;
- (void)tmlAddMethod:(id)arg1;
- (void)setTMLHandlerBlock:(CDUnknownBlockType)arg1 forSignal:(id)arg2;
- (id)tmlEmitSignalOrCallMethod:(id)arg1 withArguments:(id)arg2;
- (void)addMetaObject:(id)arg1;
- (id)tmlCallMethod:(id)arg1 withArguments:(id)arg2;
- (void)removeTMLSignal:(id)arg1;
- (_Bool)tmlHasSignal:(id)arg1;
- (id)tmlInvoke:(id)arg1:(id)arg2;
- (id)tmlGetValueProxy:(id)arg1;
- (id)tmlGetValue:(id)arg1;
- (void)tmlMakeJSObjectClass;

@end
