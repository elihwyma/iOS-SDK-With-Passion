/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMMailboxScope, EMMessageObjectID, EMObjectID, NSDate, NSString;

@interface _EMUserActionState : NSObject

{
    _Bool _scrolledToEnd;
    NSDate *_viewingStarted;
    EMMessageObjectID *_messageObjectID;
    EMObjectID *_key;
    NSString *_cellStyle;
    NSString *_messageListType;
    long long _row;
    EMMailboxScope *_mailboxScope;
}

@property (retain, nonatomic) NSDate *viewingStarted;
@property (retain, nonatomic) EMMessageObjectID *messageObjectID;
@property (nonatomic) _Bool scrolledToEnd;
@property (copy, nonatomic) EMObjectID *key;
@property (copy, nonatomic) NSString *cellStyle;
@property (copy, nonatomic) NSString *messageListType;
@property (nonatomic) long long row;
@property (retain, nonatomic) EMMailboxScope *mailboxScope;

@end
