//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HKMCNotificationInteractedMetric : NSObject
{
    NSDictionary *_eventPayload;
    NSString *_category;
    NSString *_action;
}

+ (id)eventName;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithCategory:(id)arg1 action:(id)arg2;

@end

