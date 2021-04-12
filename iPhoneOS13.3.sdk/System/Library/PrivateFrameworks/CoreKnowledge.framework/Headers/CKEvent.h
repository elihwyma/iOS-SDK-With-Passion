//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface CKEvent : NSObject
{
    NSString *_identifier;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDictionary *_metadata;
}

@property(readonly, retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4;

@end

