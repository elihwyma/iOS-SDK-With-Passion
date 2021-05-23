/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSSet, NSString;

@interface TBLocalFetchResponse : NSObject

{
    NSError *error;
    NSSet *_tiles;
    NSArray *_results;
    NSDictionary *_resultsByBSSID;
}

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSDictionary *resultsByBSSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSSet *tiles;

+ (id)responseWithResultsByBSSID:(id)arg1;
+ (id)responseWithResults:(id)arg1 entityDescription:(id)arg2;

- (id)initWithResults:(id)arg1 entityDescription:(id)arg2;
- (id)initWithResultsByBSSID:(id)arg1;

@end
