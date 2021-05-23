/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSMutableSet, NSSet, NSString;

@interface TBMutableTileFetchResponse : NSObject

{
    NSError *error;
    NSArray *results;
    NSDictionary *resultsByBSSID;
    NSMutableSet *_mutableTiles;
}

@property (retain, nonatomic) NSMutableSet *mutableTiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *results;
@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;

- (id)init;
- (void)addResponse:(id)arg1;

@end
