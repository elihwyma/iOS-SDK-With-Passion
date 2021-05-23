/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _ATXDESRecord : NSObject

{
    CDStruct_d8fa4ea4 *_predictionItems;
    unsigned long long _predictionCount;
    NSArray *_bundleIds;
    NSString *_launchBundle;
    long long _version;
    unsigned long long _consumerType;
}

@property (nonatomic, readonly) CDStruct_d8fa4ea4 *predictionItems;
@property (nonatomic, readonly) unsigned long long predictionCount;
@property (nonatomic, readonly) NSArray *bundleIds;
@property (nonatomic, readonly) NSString *launchBundle;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) unsigned long long consumerType;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)info;
- (_Bool)isEqualToRecord:(id)arg1;
- (id)initWithScores:(const vector_5be31511 *)arg1 version:(long long)arg2 launchBundle:(id)arg3;
- (id)initWithAppsByRank:(id)arg1 version:(long long)arg2 launchBundle:(id)arg3 consumerType:(unsigned long long)arg4;

@end
