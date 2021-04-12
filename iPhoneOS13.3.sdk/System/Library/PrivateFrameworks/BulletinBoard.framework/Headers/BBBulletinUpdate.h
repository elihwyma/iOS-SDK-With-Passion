//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletin *_bulletin;
    NSUInteger _feeds;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger feeds; // @synthesize feeds=_feeds;
@property(readonly, copy, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)typeDescription;
- (id)initWithBulletin:(id)arg1 feeds:(NSUInteger)arg2;

@end

