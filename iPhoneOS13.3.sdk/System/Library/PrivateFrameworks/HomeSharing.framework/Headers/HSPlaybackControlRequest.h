//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest
{
    unsigned int _interfaceID;
    long long _controlCommand;
}

@property(readonly, nonatomic) unsigned int interfaceID; // @synthesize interfaceID=_interfaceID;
@property(readonly, nonatomic) long long controlCommand; // @synthesize controlCommand=_controlCommand;
- (id)initWithInterfaceID:(unsigned int)arg1 controlCommand:(long long)arg2;

@end

