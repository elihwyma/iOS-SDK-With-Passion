//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUPrivacyManager : NSObject
{
}

+ (id)sharedPrivacyManager;
- (id)allBlacklistRules;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)addRule:(id)arg1;
- (void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2;
- (void)_handleBlockListChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

