//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

@interface STTemperature : STSiriModelObject
{
    double _value;
    long long _units;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)units;
- (double)value;
- (id)_initWithValue:(double)arg1 units:(long long)arg2;

@end
