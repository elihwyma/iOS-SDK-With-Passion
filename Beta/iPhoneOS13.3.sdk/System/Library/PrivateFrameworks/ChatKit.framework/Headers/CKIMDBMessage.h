/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage

{
    int _personID;
    NSString *_personName;
}

@property (retain, nonatomic) NSString *personName;
@property (nonatomic) int personID;

- (void)dealloc;
- (id)initWithRecordID:(long long)arg1;
- (void)resetIMPerson;
- (void)markAsRead;

@end
