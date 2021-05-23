/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject

{
    CARAutomaticDNDStatus *_DNDStatus;
}

@property (retain, nonatomic) CARAutomaticDNDStatus *DNDStatus;

+ (id)sharedInstance;

- (id)outputFromRhodesUtility;

@end
