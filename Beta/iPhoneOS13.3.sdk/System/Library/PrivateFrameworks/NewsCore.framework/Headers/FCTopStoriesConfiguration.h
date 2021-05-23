/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSString, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject <Swift>

{
    NTPBTopStoriesConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _promotingEnabled;
    NSString *_channelID;
    NSDictionary *_styleConfigurations;
    long long _storyTypeTimeout;
}

@property (nonatomic, readonly, getter=isPromotingEnabled) _Bool promotingEnabled;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSDictionary *styleConfigurations;
@property (nonatomic, readonly) long long storyTypeTimeout;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesConfig:(id)arg1;

@end
