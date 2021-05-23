/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class JSContext, NSError, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface NUJSContext : NSObject

{
    NSHashTable *_collectedProxies;
    NSMutableArray *_stateStack;
    NSMutableDictionary *_functions;
    JSContext *_jsContext;
}

@property (retain) JSContext *jsContext;
@property (retain, nonatomic) NSError *error;

+ (void)execute:(CDUnknownBlockType)arg1;
+ (_Bool)validateValuesAreNumbers:(id)arg1 error:(out id *)arg2;
+ (id)contextForContext:(id)arg1;

- (id)init;
- (void)addProxy:(id)arg1;
- (id)currentState;
- (void)popState;
- (void)pushState:(id)arg1;
- (void)setupBuiltInFunctions;
- (void)resetAllProxies;
- (id)functionForKey:(id)arg1;
- (void)setFunction:(id)arg1 forKey:(id)arg2;

@end
