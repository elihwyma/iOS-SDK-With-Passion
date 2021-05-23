/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

@class NSString, SBSiriHardwareButtonInteraction;

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase

{
    long long _siriButtonIdentifier;
    SBSiriHardwareButtonInteraction *_parentSiriInteraction;
}

@property (nonatomic) long long siriButtonIdentifier;
@property (weak, nonatomic) SBSiriHardwareButtonInteraction *parentSiriInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)arg1;

- (_Bool)consumeSinglePressUp;

@end
