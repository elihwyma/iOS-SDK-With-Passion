/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <MobileMailUI/Swift-Protocol.h>

@class NSIndexSet;

@protocol MessageItemFlagsViewModelBuilder <Swift>

@property (nonatomic, getter=isRead) _Bool read;
@property (nonatomic, getter=isFlagged) _Bool flagged;
@property (copy, nonatomic) NSIndexSet *flagColors;
@property (nonatomic, getter=isReplied) _Bool replied;
@property (nonatomic, getter=isForwarded) _Bool forwarded;
@property (nonatomic, getter=isVIP) _Bool VIP;
@property (nonatomic, getter=isNotify) _Bool notify;
@property (nonatomic, getter=isMute) _Bool mute;

@end
