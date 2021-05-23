/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

@class JSValue, NSMapTable;

@interface JSManagedValue : NSObject

{
    struct Weak<JSC::JSGlobalObject> m_globalObject;
    struct RefPtr<JSC::JSLock, WTF::DumbPtrTraits<JSC::JSLock>> m_lock;
    struct JSWeakValue m_weakValue;
    NSMapTable *m_owners;
}

@property (readonly) JSValue *value;

+ (id)managedValueWithValue:(id)arg1;
+ (id)managedValueWithValue:(id)arg1 andOwner:(id)arg2;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithValue:(id)arg1;
- (void)disconnectValue;
- (void)didAddOwner:(id)arg1;
- (void)didRemoveOwner:(id)arg1;

@end
