/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKAppBrowserBridge, NSDictionary;

@interface IKJSBrowser : IKJSObject

{
    double _cornerRadius;
    double _interitemSpacing;
    NSDictionary *_maskInset;
    IKAppBrowserBridge *_bridge;
}

@property (retain, nonatomic) IKAppBrowserBridge *bridge;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) NSDictionary *maskInset;

- (void)present;

@end
