//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/ECMessage-Protocol.h>

@protocol EDIndexableAccount, EDIndexableMailbox;

@protocol EDIndexableMessage <ECMessage>
@property(readonly, nonatomic) NSUInteger fileSize;
@property(readonly, nonatomic) id <EDIndexableMailbox> mailbox;
@property(readonly, nonatomic) id <EDIndexableAccount> account;
@end

