/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface JSVirtualMachine : NSObject

{
    struct OpaqueJSContextGroup *m_group;
    struct Lock m_externalDataMutex;
    NSMapTable *m_contextCache;
    NSMapTable *m_externalObjectGraph;
    NSMapTable *m_externalRememberedSet;
}

+ (id)virtualMachineWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
+ (unsigned long long)setNumberOfDFGCompilerThreads:(unsigned long long)arg1;
+ (unsigned long long)setNumberOfFTLCompilerThreads:(unsigned long long)arg1;
+ (void)setCrashOnVMCreation:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)addContext:(id)arg1 forGlobalContextRef:(struct OpaqueJSContext *)arg2;
- (id)contextForGlobalContextRef:(struct OpaqueJSContext *)arg1;
- (void)addManagedReference:(id)arg1 withOwner:(id)arg2;
- (void)removeManagedReference:(id)arg1 withOwner:(id)arg2;
- (struct VM *)vm;
- (id)initWithContextGroupRef:(struct OpaqueJSContextGroup *)arg1;
- (_Bool)isOldExternalObject:(id)arg1;
- (void)addExternalRememberedObject:(id)arg1;
- (struct Lock *)externalDataMutex;
- (id)externalObjectGraph;
- (id)externalRememberedSet;
- (void)shrinkFootprintWhenIdle;
- (_Bool)isWebThreadAware;

@end
