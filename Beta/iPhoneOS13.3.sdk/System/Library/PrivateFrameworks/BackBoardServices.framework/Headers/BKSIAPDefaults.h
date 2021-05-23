/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *videoTVOutSystem;
@property (nonatomic, readonly) NSString *videoTVOutSignal;
@property (nonatomic, readonly) NSString *videoTVOutReservedForIPodOut;
@property (nonatomic, readonly) NSString *videoTVOutReservedForRemoteUI;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
