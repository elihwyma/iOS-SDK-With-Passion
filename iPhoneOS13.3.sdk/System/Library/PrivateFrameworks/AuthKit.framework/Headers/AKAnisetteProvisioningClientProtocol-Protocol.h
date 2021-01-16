//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKAppleIDAuthenticationContext, NSData, NSString;

@protocol AKAnisetteProvisioningClientProtocol <NSObject>
- (void)legacyAnisetteDataForContext:(AKAppleIDAuthenticationContext *)arg1 DSID:(NSString *)arg2 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)fetchAnisetteDataForContext:(AKAppleIDAuthenticationContext *)arg1 provisionIfNecessary:(BOOL)arg2 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg3;
- (void)eraseAnisetteForContext:(AKAppleIDAuthenticationContext *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)syncAnisetteForContext:(AKAppleIDAuthenticationContext *)arg1 withSIMData:(NSData *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)provisionAnisetteForContext:(AKAppleIDAuthenticationContext *)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
@end
