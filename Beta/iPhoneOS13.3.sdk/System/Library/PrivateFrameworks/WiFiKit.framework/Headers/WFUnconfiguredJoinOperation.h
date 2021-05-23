/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class AirPortAssistantController, NSDictionary, UINavigationController, UIViewController;

@interface WFUnconfiguredJoinOperation : WFOperation

{
    AirPortAssistantController *_airportController;
    UINavigationController *_navigationController;
    UIViewController *_rootViewController;
    NSDictionary *_parameters;
}

@property (retain, nonatomic) AirPortAssistantController *airportController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) NSDictionary *parameters;

- (void)start;
- (void)finish;
- (id)initWithParameters:(id)arg1 rootViewController:(id)arg2;
- (void)airPortAssistantComplete:(id)arg1 result:(int)arg2 context:(id)arg3 animated:(_Bool)arg4;

@end
