/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailboxProvider, NSMutableArray, NSMutableSet;

@interface _MFMailMessageDuplicateInfo : NSObject

{
    MFMailboxProvider *_mailboxProvider;
    NSMutableSet *_mailboxes;
    NSMutableArray *_flags;
    NSMutableArray *_dates;
}

@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;
@property (retain, nonatomic) NSMutableSet *mailboxes;
@property (retain, nonatomic) NSMutableArray *flags;
@property (retain, nonatomic) NSMutableArray *dates;

- (void)addMessage:(id)arg1;
- (id)initWithMailboxProvider:(id)arg1;
- (id)combinedMailboxes;
- (id)combinedMessageFlags;
- (id)combinedDate;

@end
