//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage
{
    MFMailMessage *_message;
    NSUInteger _clientID;
    NSString *_bodyData;
}

// - (void).cxx_destruct;
- (int)bodyType;
- (id)serverID;
- (void)setClientID:(NSUInteger)arg1;
- (id)clientID;
- (id)body;
- (id)subject;
- (id)date;
- (id)replyTo;
- (id)from;
- (id)bcc;
- (id)cc;
- (id)to;
- (id)messageIDHeader;
- (id)initWithMailMessage:(id)arg1 clientID:(NSUInteger)arg2;

@end

