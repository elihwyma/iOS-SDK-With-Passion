//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKAllergyRecord.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@interface HKAllergyRecord (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
@end

