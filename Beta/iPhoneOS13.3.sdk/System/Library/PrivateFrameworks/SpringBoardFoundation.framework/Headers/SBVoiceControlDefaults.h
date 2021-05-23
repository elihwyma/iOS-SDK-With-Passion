/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBVoiceControlDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) _Bool disableVoiceControlForBluetoothRequests;
@property (nonatomic, readonly) _Bool disableHandlerActions;
@property (nonatomic, readonly, getter=isVoiceControlLoggingEnabled) _Bool voiceControlLoggingEnabled;

- (void)_bindAndRegisterDefaults;

@end
