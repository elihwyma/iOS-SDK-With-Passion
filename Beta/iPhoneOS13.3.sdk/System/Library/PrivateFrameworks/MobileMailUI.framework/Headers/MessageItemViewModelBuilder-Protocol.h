/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/Swift-Protocol.h>

@class NSDate;

@protocol MessageItemViewModelBuilder <Swift>

@property (nonatomic, getter=isBlockedSender) _Bool blockedSender;
@property (nonatomic) _Bool hasAttachments;
@property (copy, nonatomic) NSDate *dateReceived;

@end
