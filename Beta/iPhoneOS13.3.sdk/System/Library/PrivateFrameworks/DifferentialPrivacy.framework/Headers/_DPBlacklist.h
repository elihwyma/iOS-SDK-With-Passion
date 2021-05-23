/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface _DPBlacklist : NSObject

{
    NSSet *_blacklist;
    long long _version;
    NSString *_key;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSSet *blacklist;
@property (nonatomic, readonly) long long version;

+ (void)initialize;
+ (void)resetAllBlacklists;
+ (id)extractKeyFromFileName:(id)arg1;
+ (id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2;
+ (_Bool)blacklistExistsWithKey:(id)arg1 inDirectory:(id)arg2;
+ (id)filePathWithKey:(id)arg1 inDirectory:(id)arg2;
+ (id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3;
+ (void)removeBlackListForKey:(id)arg1;

- (id)init;
- (id)initWithKey:(id)arg1 fromConfigurationsFile:(id)arg2;

@end
