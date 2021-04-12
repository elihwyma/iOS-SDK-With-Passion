//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TUMomentsProvider : NSObject
{
    BOOL _remoteMomentsAvailable;
    long long _streamToken;
    NSString *_requesterID;
    NSDictionary *_remoteIDSDestinations;
}

@property(readonly, nonatomic, getter=isRemoteMomentsAvailable) BOOL remoteMomentsAvailable; // @synthesize remoteMomentsAvailable=_remoteMomentsAvailable;
@property(readonly, copy, nonatomic) NSDictionary *remoteIDSDestinations; // @synthesize remoteIDSDestinations=_remoteIDSDestinations;
@property(readonly, copy, nonatomic) NSString *requesterID; // @synthesize requesterID=_requesterID;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
// - (void).cxx_destruct;
- (BOOL)isEqualToProvider:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initWithCall:(id)arg1;

@end

