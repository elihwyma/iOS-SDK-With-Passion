//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase
{
    NSString *_eventmessageEcho;
}

+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedEventMessageKeys;
@property(copy, nonatomic) NSString *eventmessageEcho; // @synthesize eventmessageEcho=_eventmessageEcho;
// - (void).cxx_destruct;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

