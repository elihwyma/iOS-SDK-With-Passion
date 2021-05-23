/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction

{
    NSNumber *_flagColor;
}

@property (retain, nonatomic) NSNumber *flagColor;

- (void)_toggleFlagWithBuilder:(id)arg1;
- (_Bool)flagState;
- (_Bool)_isFlagged;

@end
