//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_items;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)clinicalRecords;
- (id)medicalRecords;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

