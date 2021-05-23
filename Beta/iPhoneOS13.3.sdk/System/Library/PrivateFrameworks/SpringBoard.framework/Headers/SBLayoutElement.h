/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@interface SBLayoutElement : NSObject <Swift>

{
    NSString *_uniqueIdentifier;
    long long _layoutRole;
    unsigned long long _supportedLayoutRoles;
    unsigned long long _layoutAttributes;
    Class _viewControllerClass;
    CDUnknownBlockType _entityGenerator;
}

@property (copy, nonatomic) CDUnknownBlockType entityGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) unsigned long long supportedLayoutRoles;
@property (nonatomic, readonly) unsigned long long layoutAttributes;
@property (nonatomic, readonly) Class viewControllerClass;

+ (id)elementWithDescriptor:(id)arg1;
+ (id)elementWithDescriptor:(id)arg1 layoutRole:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)workspaceEntity;
- (_Bool)supportsLayoutRole:(long long)arg1;
- (_Bool)hasLayoutAttributes:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2 supportedLayoutRoles:(unsigned long long)arg3 layoutAttributes:(unsigned long long)arg4 viewControllerClass:(Class)arg5 entityGenerator:(CDUnknownBlockType)arg6;

@end
