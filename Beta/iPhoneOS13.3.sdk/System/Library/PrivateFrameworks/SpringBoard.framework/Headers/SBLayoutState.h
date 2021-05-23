/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSSet, NSString;

@interface SBLayoutState : NSObject <Swift>

{
    long long _interfaceOrientation;
    long long _elementInterfaceOrientation;
    NSSet *_elements;
}

@property (nonatomic, readonly) NSSet *elements;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long elementInterfaceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_defaultInterfaceOrientation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)elementWithIdentifier:(id)arg1;
- (id)elementWithRole:(long long)arg1;
- (id)appLayout;
- (id)displayItemFromLayoutElement:(id)arg1;
- (id)floatingAppLayout;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 elementInterfaceOrientation:(long long)arg3;
- (_Bool)layoutContainsRole:(long long)arg1;
- (_Bool)isEqual:(id)arg1 withRole:(long long)arg2;

@end
