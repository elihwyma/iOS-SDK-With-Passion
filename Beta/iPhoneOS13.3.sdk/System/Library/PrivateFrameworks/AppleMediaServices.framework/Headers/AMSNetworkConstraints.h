/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

#import <AppleMediaServices/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <Swift>

{
    NSMutableDictionary *_sizeLimits;
}

@property (retain, nonatomic) NSMutableDictionary *sizeLimits;
@property (readonly, getter=isAnyNetworkTypeEnabled) _Bool anyNetworkTypeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagKeySet;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2;
+ (id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (long long)sizeLimitForNetworkType:(id)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2;
- (long long)_sizeLimitForNetworkType:(id)arg1;
- (_Bool)isEqualToConstraints:(id)arg1;
- (void)_disableAllNetworkTypes;
- (id)_initWithStoreConstraintDictionary:(id)arg1;
- (_Bool)hasSizeLimitForNetworkType:(id)arg1;

@end
