/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly, getter=isSystemGesturesAllowed) _Bool systemGesturesAllowed;
@property (retain, nonatomic) NSArray *systemGestureLoggingOptions;

- (void)_bindAndRegisterDefaults;

@end
