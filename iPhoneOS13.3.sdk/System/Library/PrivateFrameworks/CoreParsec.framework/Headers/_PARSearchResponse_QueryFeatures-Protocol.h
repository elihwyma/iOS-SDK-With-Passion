//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _PARQueryFeatures_Stats;

@protocol _PARSearchResponse_QueryFeatures <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL topDown;
@property(retain, nonatomic) _PARQueryFeatures_Stats *stats;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *prefix;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

