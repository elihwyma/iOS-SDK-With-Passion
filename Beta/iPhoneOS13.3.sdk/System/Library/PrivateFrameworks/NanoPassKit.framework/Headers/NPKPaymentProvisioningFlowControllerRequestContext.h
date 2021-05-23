/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NPKProtoStandaloneRequestHeader, NSString;

@interface NPKPaymentProvisioningFlowControllerRequestContext : NSObject

{
    NPKProtoStandaloneRequestHeader *_requestHeader;
    NSString *_currentStepIdentifier;
}

@property (readonly) NPKProtoStandaloneRequestHeader *requestHeader;
@property (nonatomic, readonly) NSString *currentStepIdentifier;

- (id)initWithRequestHeader:(id)arg1;

@end
