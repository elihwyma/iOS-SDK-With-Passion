/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSObject.h>

@class NUIdentifier;

@interface NUJSIdentifier : NUJSObject

@property (nonatomic, readonly) NUIdentifier *identifier;

- (id)toString;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;
- (_Bool)hasProperty:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;

@end
