//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface IMMockItemInfo : NSObject <NSSecureCoding>
{
    BOOL _outgoing;
    long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)decodedMockItemInfoArray:(id)arg1;
+ (id)encodedMockItemInfoArray:(id)arg1;
+ (id)defaultMockInfoArray;
@property(readonly, nonatomic) BOOL outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2;

@end

