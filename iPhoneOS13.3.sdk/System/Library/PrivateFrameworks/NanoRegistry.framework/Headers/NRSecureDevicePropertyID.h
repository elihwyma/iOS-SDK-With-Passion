//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

@interface NRSecureDevicePropertyID : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithPropertyString:(id)arg1;
- (id)init;

@end

