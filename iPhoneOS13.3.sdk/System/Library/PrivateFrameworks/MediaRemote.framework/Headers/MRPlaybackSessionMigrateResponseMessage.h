//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionMigrateRequest;

@interface MRPlaybackSessionMigrateResponseMessage : MRProtocolMessage
{
}

- (NSUInteger)type;
@property(readonly, nonatomic) MRPlaybackSessionMigrateRequest *request;
- (id)initWithRequest:(id)arg1;

@end

