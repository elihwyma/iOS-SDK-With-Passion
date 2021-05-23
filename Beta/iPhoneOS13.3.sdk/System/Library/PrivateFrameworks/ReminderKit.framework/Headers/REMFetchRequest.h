/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class REMFetchResultToken, _REMFetchExecutor;

@interface REMFetchRequest : NSObject <Swift>

{
    unsigned long long _fetchLimit;
    _REMFetchExecutor *_fetchExecutor;
    REMFetchResultToken *_fetchResultToken;
    long long _type;
}

@property (retain, nonatomic) _REMFetchExecutor *fetchExecutor;
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long fetchLimit;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithType:(long long)arg1;
- (id)initWithFetchExecutor:(id)arg1;
- (id)storagesAndParentFetchRequest;
- (id)storagesOnlyFetchRequest;
- (id)countOnlyFetchRequest;
- (id)objectIDsOnlyFetchRequest;
- (id)metadataFetchRequest;
- (id)fetchRequestWithFetchResultToken:(id)arg1;

@end
