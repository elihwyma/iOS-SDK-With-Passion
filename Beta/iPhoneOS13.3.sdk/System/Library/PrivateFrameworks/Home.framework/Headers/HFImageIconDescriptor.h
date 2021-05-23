/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFImageIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    _Bool _isDemoModeDescriptor;
    NSString *_imageIdentifier;
}

@property (nonatomic) _Bool isDemoModeDescriptor;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)initWithImageIdentifier:(id)arg1;
- (id)initWithDemoModeImageIdentifier:(id)arg1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;

@end
