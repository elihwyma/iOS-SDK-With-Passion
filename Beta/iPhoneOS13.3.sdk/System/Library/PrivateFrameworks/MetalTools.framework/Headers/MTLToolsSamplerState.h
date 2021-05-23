/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@interface MTLToolsSamplerState : MTLToolsObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (void)acceptVisitor:(id)arg1;

@end
