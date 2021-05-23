/*
 Image: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
 */

#import <SIMToolkitUI/STKSessionBehavior.h>

@interface STKMutableSessionBehavior : STKSessionBehavior

@property (nonatomic) double timeout;
@property (nonatomic) _Bool shouldSendResponseUponDisplay;
@property (nonatomic) _Bool dismissesAfterUserEvent;

@end
