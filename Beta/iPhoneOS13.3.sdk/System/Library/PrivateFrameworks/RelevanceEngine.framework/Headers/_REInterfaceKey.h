/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class Protocol;

@interface _REInterfaceKey : NSObject

{
    Class _c;
    Protocol *_p;
    _Bool _isClass;
    Class _cls;
    Protocol *_protocol;
}

@property (retain, nonatomic) Class cls;
@property (retain, nonatomic) Protocol *protocol;
@property (nonatomic, readonly) _Bool isProtocol;
@property (nonatomic, readonly) _REInterfaceKey *superclassKey;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClass:(Class)arg1;
- (id)initWithProtocol:(id)arg1;
- (void)enumerateAutomaticProperties:(CDUnknownBlockType)arg1;
- (void)enumerateConformedProperties:(CDUnknownBlockType)arg1;
- (void)enumerateExposedProperties:(CDUnknownBlockType)arg1;
- (void)enumerateExposedMethods:(CDUnknownBlockType)arg1;
- (_Bool)conforms:(id)arg1;

@end
