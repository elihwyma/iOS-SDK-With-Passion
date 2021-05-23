/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFPrimaryStateIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    NSString *_identifier;
    long long _primaryState;
}

@property (nonatomic, readonly) long long primaryState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)initWithIdentifier:(id)arg1 primaryState:(long long)arg2;

@end
