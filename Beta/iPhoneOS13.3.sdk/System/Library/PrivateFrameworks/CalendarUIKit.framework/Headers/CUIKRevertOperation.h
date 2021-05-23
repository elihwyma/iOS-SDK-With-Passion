/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKUserOperation.h>

@class EKChangeTracker;

@interface CUIKRevertOperation : CUIKUserOperation

{
    EKChangeTracker *_originalChangeTracker;
}

@property (retain) EKChangeTracker *originalChangeTracker;

@end
