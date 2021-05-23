/*
 Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

#import <NSObject.h>

@class NSDictionary;

@interface BiometricKitEnrollProgressInfo : NSObject

{
    int _message;
    long long _progress;
    long long _currentPrimaryComponentID;
    NSDictionary *_captureImage;
    NSDictionary *_renderedImage;
    NSDictionary *_messageDetails;
}

@property (nonatomic) long long progress;
@property (nonatomic) long long currentPrimaryComponentID;
@property (retain, nonatomic) NSDictionary *captureImage;
@property (retain, nonatomic) NSDictionary *renderedImage;
@property (nonatomic) int message;
@property (retain, nonatomic) NSDictionary *messageDetails;

- (id)init;
- (void)dealloc;

@end
