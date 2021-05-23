/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface ICJSSignConfiguration : NSObject <Swift>

{
    NSMutableArray *_componentNames;
    NSMutableArray *_components;
    NSString *_signatureDataCookieName;
    NSString *_signatureDataHeaderName;
}

@property (copy, nonatomic) NSString *signatureDataCookieName;
@property (copy, nonatomic) NSString *signatureDataHeaderName;

+ (id)storePlatformConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_enumerateComponentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)includeCookieWithName:(id)arg1;
- (void)includeHeaderWithName:(id)arg1;
- (void)includeQueryItemWithName:(id)arg1;
- (void)_addRequestComponent:(long long)arg1 withName:(id)arg2;

@end
