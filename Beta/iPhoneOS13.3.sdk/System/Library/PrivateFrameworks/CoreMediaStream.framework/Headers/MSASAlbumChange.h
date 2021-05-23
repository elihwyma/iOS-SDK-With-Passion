/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <Foundation/NSObject.h>

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject

{
    _Bool _wasDeleted;
    NSString *_GUID;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_URLString;
    MSASInvitation *_invitation;
    NSString *_name;
}

@property (copy, nonatomic) NSString *ownerEmail;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (copy, nonatomic) NSString *ownerFullName;
@property (copy, nonatomic) NSString *ownerFirstName;
@property (copy, nonatomic) NSString *ownerLastName;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool wasDeleted;
@property (retain, nonatomic) MSASInvitation *invitation;

- (id)description;

@end
