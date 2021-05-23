/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet;

@interface BBBulletinRequestParameters : NSObject

{
    unsigned long long _publisherDestination;
    long long _maximumCount;
    NSDate *_sinceDate;
    NSSet *_enabledSectionIDs;
}

@property (retain, nonatomic) NSDate *sinceDate;
@property (retain, nonatomic) NSSet *enabledSectionIDs;
@property (nonatomic, readonly) unsigned long long publisherDestination;
@property (nonatomic, readonly) unsigned long long maximumCount;

+ (_Bool)supportsSecureCoding;
+ (id)requestParametersForDestination:(unsigned long long)arg1 withSinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 sinceDate:(id)arg2 maximumCount:(long long)arg3 enabledSectionIDs:(id)arg4;

@end
