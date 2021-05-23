/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject

{
    CRCarKitServiceClient *_serviceClient;
}

@property (retain, nonatomic) CRCarKitServiceClient *serviceClient;
@property (nonatomic, readonly) _Bool shouldSuggestCarPlayTips;

- (id)init;

@end
