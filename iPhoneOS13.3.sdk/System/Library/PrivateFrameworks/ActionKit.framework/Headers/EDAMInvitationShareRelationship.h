//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMUserIdentity, NSNumber, NSString;

@interface EDAMInvitationShareRelationship : FATObject
{
    NSString *_displayName;
    EDAMUserIdentity *_recipientUserIdentity;
    NSNumber *_privilege;
    NSNumber *_sharerUserId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *sharerUserId; // @synthesize sharerUserId=_sharerUserId;
@property(retain, nonatomic) NSNumber *privilege; // @synthesize privilege=_privilege;
@property(retain, nonatomic) EDAMUserIdentity *recipientUserIdentity; // @synthesize recipientUserIdentity=_recipientUserIdentity;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// - (void).cxx_destruct;

@end

