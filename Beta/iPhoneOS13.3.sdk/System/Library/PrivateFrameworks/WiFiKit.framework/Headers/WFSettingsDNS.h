/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WFSettingsDNS : NSObject

{
    NSArray *_serverAddresses;
    NSArray *_searchDomains;
    NSDictionary *_items;
}

@property (retain, nonatomic) NSArray *serverAddresses;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSDictionary *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)automaticConfig;

- (id)initWithDictionary:(id)arg1;
- (id)protocol;
- (id)initWithServerAddresses:(id)arg1 searchDomains:(id)arg2;

@end
