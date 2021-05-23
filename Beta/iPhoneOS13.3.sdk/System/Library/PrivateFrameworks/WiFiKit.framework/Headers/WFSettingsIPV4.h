/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WFSettingsIPV4 : NSObject

{
    long long _method;
    NSArray *_addresses;
    NSArray *_subnetMasks;
    NSString *_router;
    NSString *_dhcpClientID;
    NSDictionary *_items;
}

@property (nonatomic) long long method;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *subnetMasks;
@property (copy, nonatomic) NSString *router;
@property (copy, nonatomic) NSString *dhcpClientID;
@property (retain, nonatomic) NSDictionary *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)automaticConfig;
+ (id)bootPConfig;

- (id)initWithDictionary:(id)arg1;
- (id)protocol;
- (id)initWithMethod:(long long)arg1 addresses:(id)arg2 subnetMasks:(id)arg3 router:(id)arg4 dhcpClientID:(id)arg5;

@end
