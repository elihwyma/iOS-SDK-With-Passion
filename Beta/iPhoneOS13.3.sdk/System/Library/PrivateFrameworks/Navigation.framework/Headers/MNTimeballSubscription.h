/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNPlannedDestination, NSString;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscription : NSObject

{
    MNPlannedDestination *_destination;
    long long _options;
    unsigned long long _refreshPolicy;
}

@property (copy, nonatomic, readonly) MNPlannedDestination *destination;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) unsigned long long refreshPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)subscriptionForDestination:(id)arg1 options:(long long)arg2 refreshPolicy:(unsigned long long)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;

@end
