/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NTPBPersonalizationWhitelist;

@interface FCPersonalizationWhitelist : NSObject <Swift>

{
    NTPBPersonalizationWhitelist *_pbWhitelist;
    NSSet *_portraitDisabledTagIDs;
    NSDictionary *_whitelist;
}

@property (retain, nonatomic) NSDictionary *whitelist;
@property (retain, nonatomic) NSSet *portraitDisabledTagIDs;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDictionary *defaultTags;
@property (nonatomic, readonly) NSDictionary *optionalTags;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonEncodableObject;
- (id)initWithPBPersonalizationWhitelist:(id)arg1;

@end
