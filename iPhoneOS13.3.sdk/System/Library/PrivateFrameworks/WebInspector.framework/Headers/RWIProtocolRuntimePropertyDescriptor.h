//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL nativeGetter;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property(nonatomic) BOOL isOwn;
@property(nonatomic) BOOL wasThrown;
@property(nonatomic) BOOL enumerable;
@property(nonatomic) BOOL configurable;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property(nonatomic) BOOL writable;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 configurable:(BOOL)arg2 enumerable:(BOOL)arg3;

@end

