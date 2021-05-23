/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSDate, NSSet, NSString;

@protocol TBScore;

@interface WiFiWalletPass : NSObject

{
    _Bool matched;
    NSString *SSID;
    NSString *password;
    NSSet *attributes;
    NSSet *accessPoints;
    id <TBScore> qualityScore;
    id <TBScore> popularityScore;
    NSString *_uniqueIdentifier;
    NSString *_serialNumber;
    NSDate *_relevantDate;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSDate *relevantDate;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <TBScore> popularityScore;
@property (nonatomic, readonly) id <TBScore> qualityScore;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, readonly) long long source;
@property (nonatomic, readonly) NSSet *attributes;
@property (nonatomic) _Bool matched;

- (_Bool)containsAccessPointMatchingBSSIDs:(id)arg1;

@end
