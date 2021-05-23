/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HFServiceDescriptor : NSObject <Swift>

{
    HFServiceDescriptor *_parentServiceDescriptor;
    NSString *_serviceType;
    NSString *_serviceSubtype;
    CDUnknownBlockType _parentServiceDescriptorGenerator;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType parentServiceDescriptorGenerator;
@property (copy, nonatomic, readonly) NSString *serviceType;
@property (copy, nonatomic, readonly) NSString *serviceSubtype;
@property (nonatomic, readonly) HFServiceDescriptor *parentServiceDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3;
- (id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(CDUnknownBlockType)arg3;

@end
