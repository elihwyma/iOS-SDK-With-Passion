/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface CKSceneDelegateState : NSObject

{
    _Bool _composingNewMessage;
    _Bool _showingInbox;
    NSArray *_unreadLastMessages;
    NSString *_groupID;
    NSDate *_date;
    unsigned long long _filterMode;
}

@property (nonatomic) _Bool composingNewMessage;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSArray *unreadLastMessages;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long filterMode;
@property (nonatomic) _Bool showingInbox;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivingClasses;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(_Bool)arg3 filterMode:(unsigned long long)arg4 showingInbox:(_Bool)arg5;

@end
