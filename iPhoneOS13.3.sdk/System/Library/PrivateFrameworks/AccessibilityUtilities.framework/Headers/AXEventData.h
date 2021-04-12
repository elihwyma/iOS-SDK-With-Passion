//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXEventData : NSObject
{
    struct _AXEventDataStorage _storage;
}

+ (id)dataWithBytes:(char )arg1 length:(long long)arg2;
+ (id)dataWithSender:(long long)arg1;
@property(readonly, nonatomic) long long dataLength;
@property(readonly, nonatomic) char dataBytes;
@property(readonly, nonatomic) BOOL wasPostedByAccessibility;
@property(readonly, nonatomic) long long eventSenderIdentifier;
- (id)description;
- (id)init;

@end

