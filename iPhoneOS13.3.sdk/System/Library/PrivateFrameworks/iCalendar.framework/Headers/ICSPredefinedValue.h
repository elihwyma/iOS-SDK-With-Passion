//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface ICSPredefinedValue : NSNumber
{
    long long _value;
}

+ (BOOL)supportsSecureCoding;
+ (id)numberWithLong:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (long long)longValue;
- (void)getValue:(void )arg1;
- (const char )objCType;
- (id)initWithBytes:(const void )arg1 objCType:(const char )arg2;
- (id)initWithLong:(long long)arg1;

@end

