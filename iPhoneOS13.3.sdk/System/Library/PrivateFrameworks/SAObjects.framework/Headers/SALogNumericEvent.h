//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SALogNumericEvent : SABaseClientBoundCommand
{
}

+ (id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2;
+ (id)logNumericEvent;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *eventValue;
@property(copy, nonatomic) NSString *eventOperation;
@property(copy, nonatomic) NSString *eventName;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

