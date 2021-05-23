/*
 Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _ICQBannerSpecification : NSObject

{
    NSDictionary *_serverDict;
    NSString *_messageFormat;
    NSArray *_messageLinks;
}

@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *messageFormat;
@property (retain, nonatomic) NSArray *messageLinks;

+ (id)bannerSpecificationSampleForLevel:(long long)arg1;

- (id)initWithServerDictionary:(id)arg1;
- (void)setMessageWithServerMessage:(id)arg1;

@end
