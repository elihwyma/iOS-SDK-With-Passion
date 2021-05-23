/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@interface MTLToolsEvent : MTLToolsObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)acceptVisitor:(id)arg1;

@end
