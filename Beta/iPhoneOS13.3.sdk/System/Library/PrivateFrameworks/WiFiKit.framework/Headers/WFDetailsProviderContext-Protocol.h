/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/Swift-Protocol.h>

@class MISSING_TYPE, NSArray;

@protocol WFDetailsProviderContext <Swift>

@property (nonatomic, readonly) NSArray *recommendations;
@property _Bool diagnosable;
@property (nonatomic) _Bool autoJoinEnabled;
@property (nonatomic) _Bool autoLoginEnabled;
@property (nonatomic) _Bool isInSaveDataMode;
@property (nonatomic, readonly, getter=isCurrent) _Bool current;
@property (nonatomic, readonly, getter=isKnownNetwork) _Bool knownNetwork;

- (MISSING_TYPE *)join;
- (MISSING_TYPE *)manage;
- (MISSING_TYPE *)renewLease;
- (MISSING_TYPE *)forget;
- (MISSING_TYPE *)openRecommendationLink;
- (MISSING_TYPE *)diagnosticsContext;

@end
