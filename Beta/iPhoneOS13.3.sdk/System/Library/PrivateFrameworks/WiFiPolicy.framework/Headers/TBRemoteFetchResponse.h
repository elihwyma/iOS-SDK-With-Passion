/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSError, NSSet, NSString;

@interface TBRemoteFetchResponse : NSObject

{
    NSSet *_tiles;
    NSArray *_results;
    NSError *_error;
}

@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) NSDictionary *resultsByBSSID;

+ (id)responseWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;

- (id)initWithResults:(id)arg1 tiles:(id)arg2 error:(id)arg3;

@end
