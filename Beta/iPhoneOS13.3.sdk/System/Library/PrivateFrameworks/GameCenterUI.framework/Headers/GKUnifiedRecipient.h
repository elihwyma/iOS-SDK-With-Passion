/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class CNContact, NSString;

@interface GKUnifiedRecipient : NSObject

{
    NSString *_fullName;
    NSString *_handle;
    NSString *_nickName;
    NSString *_label;
    CNContact *_contact;
}

@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CNContact *contact;

+ (id)handleForContact:(id)arg1;
+ (id)recipientForHandle:(id)arg1;
+ (id)recipientForContact:(id)arg1;

- (id)displayName;

@end
