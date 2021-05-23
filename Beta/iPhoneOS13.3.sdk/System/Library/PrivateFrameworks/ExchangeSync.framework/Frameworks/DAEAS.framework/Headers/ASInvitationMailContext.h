/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ASInvitationMailContext : NSObject

{
    _Bool _isMyInvite;
    int _emailResponse;
    NSString *_eventUID;
    NSString *_serverID;
    NSArray *_attendeeUUIDs;
}

@property (retain, nonatomic) NSString *eventUID;
@property (retain, nonatomic) NSString *serverID;
@property (nonatomic) _Bool isMyInvite;
@property (nonatomic) int emailResponse;
@property (retain, nonatomic) NSArray *attendeeUUIDs;

@end
