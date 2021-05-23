/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject

{
    NSArray *_containerItems;
    long long _originatorType;
    long long _originatorVersion;
}

@property (copy, nonatomic, readonly) NSArray *containerItems;
@property (copy, nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) long long originatorType;
@property (nonatomic, readonly) long long originatorVersion;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)containerItemFollowingContainerItem:(id)arg1;
- (id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (id)contextByRemovingContainerItem:(id)arg1;

@end
