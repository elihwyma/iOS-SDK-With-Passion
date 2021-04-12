//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDUser, NSString;

@interface HMDHomeDataPushDestination : NSObject
{
    BOOL _ignoreConfigCompare;
    NSString *_username;
    HMDUser *_user;
    NSString *_destination;
}

@property(nonatomic) BOOL ignoreConfigCompare; // @synthesize ignoreConfigCompare=_ignoreConfigCompare;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pushDestination;
- (id)description;
- (id)initWithUser:(id)arg1 destination:(id)arg2;

@end

