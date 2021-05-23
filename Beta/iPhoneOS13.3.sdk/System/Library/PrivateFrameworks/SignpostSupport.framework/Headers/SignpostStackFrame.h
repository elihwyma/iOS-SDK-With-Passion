/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface SignpostStackFrame : NSObject

{
    NSUUID *_symbolOwnerUUID;
    unsigned long long _offset;
}

@property (nonatomic, readonly) NSUUID *symbolOwnerUUID;
@property (nonatomic, readonly) unsigned long long offset;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2;
- (id)_serializableArrayRepresentation;
- (id)initWithArrayRepresentation:(id)arg1;

@end
