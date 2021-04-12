//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    BOOL _exclusive;
    long long _accessIntent;
    NSURL *_compositionAVURL;
    NSString *_accessName;
    NSDictionary *_userInfo;
    NSUUID *_identifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *accessName; // @synthesize accessName=_accessName;
@property(readonly, nonatomic) NSURL *compositionAVURL; // @synthesize compositionAVURL=_compositionAVURL;
@property(readonly, nonatomic, getter=isExclusive) BOOL exclusive; // @synthesize exclusive=_exclusive;
@property(readonly, nonatomic) long long accessIntent; // @synthesize accessIntent=_accessIntent;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;

@end

