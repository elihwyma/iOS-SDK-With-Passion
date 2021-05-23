/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface HFCAPackageIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    NSString *_packageIdentifier;
    NSString *_state;
    NSDictionary *_iconModifiers;
}

@property (nonatomic, readonly) NSString *packageIdentifier;
@property (nonatomic, readonly) NSString *state;
@property (nonatomic, readonly) NSDictionary *iconModifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2;
- (id)initWithPackageIdentifier:(id)arg1 state:(id)arg2 modifiers:(id)arg3;
- (id)initWithPackageIdentifier:(id)arg1;

@end
