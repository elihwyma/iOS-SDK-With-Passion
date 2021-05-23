/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject

{
    id _sourceObject;
    WFRecordProperty *_sourceProperty;
    id _destinationObject;
    WFRecordProperty *_destinationProperty;
}

@property (weak, nonatomic) id sourceObject;
@property (retain, nonatomic) WFRecordProperty *sourceProperty;
@property (weak, nonatomic) id destinationObject;
@property (retain, nonatomic) WFRecordProperty *destinationProperty;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (SEL)getterSelector;
- (id)getterMethodSignature;
- (SEL)setterSelector;
- (id)setterMethodSignature;
- (id)initWithSourceObject:(id)arg1 property:(id)arg2 destinationObject:(id)arg3 property:(id)arg4;
- (void)propagate;
- (void)propagate:(_Bool)arg1;
- (void)propagateUsingKVC;
- (void)propagateUsingSetter;
- (void)invokeGetterWithBuffer:(void **)arg1 length:(unsigned long long *)arg2;
- (void)invokeSetterWithBuffer:(void **)arg1 length:(unsigned long long *)arg2;

@end
