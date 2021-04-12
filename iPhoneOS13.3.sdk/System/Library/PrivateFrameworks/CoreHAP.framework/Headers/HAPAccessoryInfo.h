//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString;

@interface HAPAccessoryInfo : HMFObject
{
    BOOL _authenticated;
    NSString *_name;
    NSString *_modelName;
    NSString *_manufacturer;
    NSNumber *_category;
    NSString *_certificationStatus;
    NSString *_blacklisted;
    NSString *_ppid;
}

@property(readonly, nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) NSString *ppid; // @synthesize ppid=_ppid;
@property(readonly, nonatomic) NSString *blacklisted; // @synthesize blacklisted=_blacklisted;
@property(readonly, nonatomic) NSString *certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isBlacklisted;
- (BOOL)isCertified;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 modelName:(id)arg3 category:(id)arg4 certificationStatus:(id)arg5 blacklisted:(id)arg6 ppid:(id)arg7;

@end

