//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *mPreferredFormat;
    BOOL isDateOnly;
    BOOL isTimeOnly;
}

@property(nonatomic) BOOL isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) BOOL isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=mPreferredFormat;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 errorDescription:(out id )arg3;
- (void)dealloc;

@end

