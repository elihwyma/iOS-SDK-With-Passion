/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CAPresentationModifierGroup, NSString;

@interface CAPresentationModifier : NSObject

{
    void *_impl;
    id _keyPath;
    id _value;
    id _group;
    int _l;
    unsigned int _f;
}

@property (copy, readonly) NSString *keyPath;
@property (readonly) _Bool additive;
@property (readonly) CAPresentationModifierGroup *group;
@property (retain) id value;
@property (getter=isEnabled) _Bool enabled;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3 group:(id)arg4;
- (struct Object *)CA_copyRenderValue;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(_Bool)arg3;
- (void)write;

@end
