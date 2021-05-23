/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CNContact, IMHandle, IMNickname;

@interface CKNicknameUpdate : NSObject

{
    IMHandle *_handle;
    IMNickname *_nickname;
    CNContact *_contact;
    unsigned long long _updateType;
}

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMNickname *nickname;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) unsigned long long updateType;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
