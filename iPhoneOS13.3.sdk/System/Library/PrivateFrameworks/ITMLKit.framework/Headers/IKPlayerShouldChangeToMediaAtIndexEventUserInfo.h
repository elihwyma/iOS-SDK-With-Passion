//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    BOOL _shouldChange;
    long long _index;
}

@property(readonly, nonatomic) BOOL shouldChange; // @synthesize shouldChange=_shouldChange;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (BOOL)expectsReturnValue;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)initWithIndex:(long long)arg1;

@end

