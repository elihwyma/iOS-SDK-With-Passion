/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HFIncrementalStateIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    NSString *_identifier;
    NSNumber *_incrementalState;
}

@property (nonatomic, readonly) NSNumber *incrementalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)initWithIdentifier:(id)arg1 incrementalState:(id)arg2;

@end
