//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDAuthListener-Protocol.h>

@class CDPDFollowUpFactory, FLFollowUpController;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener>
{
    FLFollowUpController *_followUpController;
    CDPDFollowUpFactory *_followUpFactory;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)securityLevelChanged:(BOOL)arg1;
- (BOOL)clearFollowUpWithContext:(id)arg1 error:(id )arg2;
- (BOOL)postFollowUpItemForContext:(id)arg1 error:(id )arg2;
- (id)init;

@end

