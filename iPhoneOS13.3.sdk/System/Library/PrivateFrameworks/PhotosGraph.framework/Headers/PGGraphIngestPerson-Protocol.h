//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSDictionary, NSString;

@protocol PGGraphIngestPerson <NSObject>
@property(readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property(readonly, nonatomic) NSUInteger gender;
@property(readonly, nonatomic) NSUInteger ageCategory;
@property(readonly, nonatomic) NSUInteger relationship;
@property(readonly, nonatomic) NSDate *anniversaryDate;
@property(readonly, nonatomic) NSDate *potentialBirthdayDate;
@property(readonly, nonatomic) NSDate *birthdayDate;
@property(readonly, nonatomic) BOOL isMe;
@property(readonly, nonatomic) BOOL isUserCreated;
@property(readonly, nonatomic) BOOL isFavorite;
@property(readonly, nonatomic) NSString *contactID;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSString *fullName;
@end
