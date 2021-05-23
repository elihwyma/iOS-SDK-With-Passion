/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class JSContext, JSValue, NSArray, NSDictionary, NSException, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TMLMetaContext;

@interface TMLContext : NSObject

{
    TMLMetaContext *_metaContext;
    NSMutableDictionary *_objects;
    NSMutableSet *_contextObjects;
    NSMutableSet *_weakObjectIdentifiers;
    NSMutableArray *_signalHandlers;
    JSContext *_jsContext;
    NSArray *_currentEvaluationBindings;
    NSException *_jsEvaluationException;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
    _Bool _initialized;
    NSMutableSet *_requires;
    unsigned long long _options;
    _Bool _beingDisposed;
}

@property (nonatomic, readonly) NSObject *rootObject;
@property (nonatomic, readonly) NSDictionary *allObjects;

+ (void)initialize;
+ (id)currentContext;
+ (_Bool)loadClasses:(id)arg1;
+ (void)initializeJSContext:(id)arg1;
+ (Class)createClassFromPath:(id)arg1;
+ (id)loadMetaContextWithSource:(id)arg1 path:(id)arg2 options:(unsigned long long)arg3;
+ (_Bool)loadClasses:(id)arg1 path:(id)arg2;
+ (_Bool)loadClassesFromPath:(id)arg1;
+ (id)cloneContext:(id)arg1 objects:(id)arg2;
+ (void)addGloballyRequiredModules:(id)arg1;
+ (void)printStatisticsWithInterval:(double)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (_Bool)valid;
- (void)dispose;
- (id)objectWithIdentifier:(id)arg1;
- (void)addObject:(id)arg1 withIdentifier:(id)arg2;
- (void)makeWeakObjectWithIdentifier:(id)arg1;
- (_Bool)loadSourceFromPath:(id)arg1;
- (_Bool)raiseException:(id)arg1;
- (id)callFunction:(id)arg1 arguments:(id)arg2 returnType:(unsigned long long)arg3;
- (_Bool)loadSource:(id)arg1;
- (void)disposeIfNecessary;
- (void)requireModule:(id)arg1;
- (void)raiseJSException:(id)arg1;
- (id)evaluateExpression:(id)arg1 ofType:(unsigned long long)arg2 withBindings:(id)arg3;
- (id)metaContext;
- (id)apiObject;
- (void)callFunction:(id)arg1 arguments:(id)arg2;
- (void)resetException;
- (_Bool)loadSource:(id)arg1 path:(id)arg2;
- (void)initizalizeContext;
- (void)addObjectReference:(id)arg1;
- (void)initializeWithCloneContext:(id)arg1;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(_Bool)arg2;
- (id)objectWithIdentifier:(id)arg1 unwrapWeak:(_Bool)arg2 createIfMissing:(_Bool)arg3;
- (id)createObjectFromMetaObject:(id)arg1 parent:(id)arg2;
- (id)processValue:(id)arg1 ofType:(unsigned long long)arg2 selfValue:(id)arg3;
- (id)applyProperties:(id)arg1 inOrder:(id)arg2 toObject:(id)arg3;
- (id)didCreateObject:(id)arg1;
- (void)attachToAPIObject;
- (void)initializeJSContext;
- (id)existingObjectWithIdentifier:(id)arg1;
- (void)resetJSException;
- (id)objectWithIdentifierNoCreate:(id)arg1;
- (id)objectsOfType:(id)arg1;

@end
