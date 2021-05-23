/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface JSObjCClassInfo : NSObject

{
    Class m_class;
    _Bool m_block;
    struct OpaqueJSClass *m_classRef;
    struct Weak<JSC::JSObject> m_prototype;
    struct Weak<JSC::JSObject> m_constructor;
    struct Weak<JSC::Structure> m_structure;
}

- (void)dealloc;
- (id).cxx_construct;
- (struct JSObject *)prototypeInContext:(id)arg1;
- (struct Structure *)structureInContext:(id)arg1;
- (pair_bfa3637f)allocateConstructorAndPrototypeInContext:(id)arg1;
- (id)initForClass:(Class)arg1;
- (struct JSObject *)wrapperForObject:(id)arg1 inContext:(id)arg2;
- (struct JSObject *)constructorInContext:(id)arg1;

@end
