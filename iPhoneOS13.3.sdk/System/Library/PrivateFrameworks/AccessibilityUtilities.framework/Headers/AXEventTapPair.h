//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXEventTapPair : NSObject
{
    int priority;
    int _type;
    id /* CDUnknownBlockType */ handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient _systemClient;
    id /* CDUnknownBlockType */ _matchingServiceHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ matchingServiceHandler; // @synthesize matchingServiceHandler=_matchingServiceHandler;
@property(retain, nonatomic) struct __IOHIDEventSystemClient systemClient; // @synthesize systemClient=_systemClient;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int priority; // @synthesize priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ handler; // @synthesize handler;
// - (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end

