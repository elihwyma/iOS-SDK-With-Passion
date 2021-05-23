/*
 Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

#import <Foundation/NSExtensionContext.h>

@class NSString;

@protocol FLExtensionHostContextInterface;

@interface FLExtensionHostContext : NSExtensionContext

{
    id <FLExtensionHostContextInterface> _delegate;
}

@property (weak, nonatomic) id <FLExtensionHostContextInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)extensionDidFinish;
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end
