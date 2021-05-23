/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject

{
    NSString *_fromComponentIdentifier;
    NSString *_toComponentIdentifier;
    long long _fromDependencyAttribute;
    long long _toDependencyAttribute;
    SXComponentDependencyDescriptor *_descriptor;
}

@property (retain, nonatomic) NSString *fromComponentIdentifier;
@property (retain, nonatomic) NSString *toComponentIdentifier;
@property (nonatomic) long long fromDependencyAttribute;
@property (nonatomic) long long toDependencyAttribute;
@property (retain, nonatomic) SXComponentDependencyDescriptor *descriptor;

+ (id)componentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithComponentDependencyFromComponentIdentifier:(id)arg1 toComponentIdentifier:(id)arg2 fromLayoutAttribute:(long long)arg3 toAttribute:(long long)arg4 withDescriptor:(id)arg5;

@end
