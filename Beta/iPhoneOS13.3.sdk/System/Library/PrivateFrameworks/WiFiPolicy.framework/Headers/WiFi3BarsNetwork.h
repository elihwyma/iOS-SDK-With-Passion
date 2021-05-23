/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@protocol TBNetwork, TBScore;

@interface WiFi3BarsNetwork : NSObject

{
    _Bool matched;
    _Bool _unwantedNetworkName;
    NSString *password;
    NSSet *_attributes;
    id <TBScore> _qualityScore;
    id <TBScore> _popularityScore;
    NSString *_uniqueIdentifier;
    NSString *_SSID;
    id <TBNetwork> _network;
}

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *SSID;
@property (retain, nonatomic) id <TBNetwork> network;
@property (nonatomic) _Bool unwantedNetworkName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <TBScore> popularityScore;
@property (nonatomic, readonly) id <TBScore> qualityScore;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (copy, nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSSet *attributes;
@property (nonatomic) _Bool matched;

- (id)initWithNetwork:(id)arg1;
- (_Bool)containsAccessPointMatchingBSSIDs:(id)arg1;

@end
