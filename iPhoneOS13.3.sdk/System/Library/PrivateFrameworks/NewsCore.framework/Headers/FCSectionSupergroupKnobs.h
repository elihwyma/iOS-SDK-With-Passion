//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCSectionSupergroupKnobs : NSObject
{
    BOOL _isEligible;
    NSString *_nameOverride;
    double _rankMultiplier;
}

@property(readonly, nonatomic) double rankMultiplier; // @synthesize rankMultiplier=_rankMultiplier;
@property(readonly, nonatomic) NSString *nameOverride; // @synthesize nameOverride=_nameOverride;
@property(nonatomic) BOOL isEligible; // @synthesize isEligible=_isEligible;
// - (void).cxx_destruct;
- (id)initWithJSONData:(id)arg1;
- (id)initWithJSONString:(id)arg1;

@end

