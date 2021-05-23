/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class SBSSystemServiceClient;

@interface SBSAbstractSystemService

@property (nonatomic, readonly) SBSSystemServiceClient *client;

+ (Class)serviceFacilityClientClass;

@end
