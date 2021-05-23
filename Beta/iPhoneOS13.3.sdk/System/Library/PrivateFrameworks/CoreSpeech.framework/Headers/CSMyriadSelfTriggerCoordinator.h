/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CSMyriadSelfTriggerCoordinatorDelegate;

@interface CSMyriadSelfTriggerCoordinator : NSObject

{
    id <CSMyriadSelfTriggerCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <CSMyriadSelfTriggerCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;

@end
