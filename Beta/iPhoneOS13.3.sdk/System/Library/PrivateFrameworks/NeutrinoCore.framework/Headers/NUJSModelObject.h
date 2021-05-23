/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSObject.h>

@class NUModel;

@interface NUJSModelObject : NUJSObject

{
    NUModel *_model;
}

@property (nonatomic, readonly) NUModel *model;

+ (id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3;

- (id)description;
- (void)reset;
- (id)toObject;
- (_Bool)hasProperty:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;

@end
