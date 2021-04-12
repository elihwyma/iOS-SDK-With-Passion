//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>
#import <SAObjects/SASetSingleClientState-Protocol.h>

@class SAClientFlowState;

@interface SASetClientFlowState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>
{
}

+ (id)setClientFlowStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setClientFlowState;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAClientFlowState *clientState;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

