/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse

{
    NSData *_xmlUIData;
}

@property (nonatomic, readonly) NSData *xmlUIData;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseXMLData;
- (_Bool)bodyIsPlist;

@end
