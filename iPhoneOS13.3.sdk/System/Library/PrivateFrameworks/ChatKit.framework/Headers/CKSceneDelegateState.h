//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, NSString;

@interface CKSceneDelegateState : NSObject <NSSecureCoding>
{
    BOOL _composingNewMessage;
    BOOL _showingInbox;
    NSArray *_unreadLastMessages;
    NSString *_groupID;
    NSDate *_date;
    NSUInteger _filterMode;
}

+ (BOOL)supportsSecureCoding;
+ (id)unarchivingClasses;
@property(nonatomic) BOOL showingInbox; // @synthesize showingInbox=_showingInbox;
@property(nonatomic) NSUInteger filterMode; // @synthesize filterMode=_filterMode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) BOOL composingNewMessage; // @synthesize composingNewMessage=_composingNewMessage;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSArray *unreadLastMessages; // @synthesize unreadLastMessages=_unreadLastMessages;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(BOOL)arg3 filterMode:(NSUInteger)arg4 showingInbox:(BOOL)arg5;

@end

