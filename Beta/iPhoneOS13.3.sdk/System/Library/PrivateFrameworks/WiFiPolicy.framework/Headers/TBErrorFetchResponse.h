/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSSet, NSString;

@interface TBErrorFetchResponse : NSObject

{
    NSArray *results;
    NSSet *tiles;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;

+ (id)responseWithError:(id)arg1;
+ (id)remoteResponseWithError:(id)arg1;

- (id)initWithError:(id)arg1;

@end
