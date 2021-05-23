/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSString, NSURL;

@interface ADContentProxyAttributes : NSObject

{
    NSURL *_contentProxyURL;
    NSURL *_contentProxyURLConnect;
    long long _proxyType;
    NSString *_configVersion;
}

@property (copy, nonatomic) NSURL *contentProxyURL;
@property (copy, nonatomic) NSURL *contentProxyURLConnect;
@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) long long proxyType;

+ (id)sharedInstance;

- (void)contentProxyURLDidChange:(id)arg1;
- (void)contentProxyURLConnectDidChange:(id)arg1;
- (void)proxyTypeDidChange:(long long)arg1;
- (void)configVersionDidChange:(id)arg1;

@end
