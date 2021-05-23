/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFServiceStateCharacteristicMatchResult : NSObject <Swift>

{
    NSSet *_allCharacteristics;
    NSDictionary *_servicesByUUID;
    NSSet *_services;
    NSDictionary *_characteristicsByServiceUUID;
}

@property (copy, nonatomic, readonly) NSSet *services;
@property (copy, nonatomic, readonly) NSDictionary *servicesByUUID;
@property (copy, nonatomic, readonly) NSSet *allCharacteristics;
@property (copy, nonatomic, readonly) NSDictionary *characteristicsByServiceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (id)matchResultByMergingResults:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithServices:(id)arg1 characteristicsByServiceUUID:(id)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2;

@end
