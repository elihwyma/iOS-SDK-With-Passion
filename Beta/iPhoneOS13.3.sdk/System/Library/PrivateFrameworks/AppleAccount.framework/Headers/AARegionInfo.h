/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

#import <AppleAccount/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface AARegionInfo : NSObject <Swift>

{
    NSDictionary *_regionInfoDictionary;
}

@property (nonatomic, readonly) NSString *displayedHostname;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;

@end
