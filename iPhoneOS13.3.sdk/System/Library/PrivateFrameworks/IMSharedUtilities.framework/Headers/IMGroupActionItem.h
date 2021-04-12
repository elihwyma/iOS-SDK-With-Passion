//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>

@class NSString;

@interface IMGroupActionItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    long long _actionType;
    NSString *_otherCountryCode;
    NSString *_otherHandle;
    NSString *_otherUnformattedID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)copyDictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;

@end

