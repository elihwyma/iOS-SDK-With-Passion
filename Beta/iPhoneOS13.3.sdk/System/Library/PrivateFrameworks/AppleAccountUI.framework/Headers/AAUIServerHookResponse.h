/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURLRequest;

@interface AAUIServerHookResponse : NSObject

{
    NSDictionary *_additionalPayload;
    NSURLRequest *_continuationRequest;
}

@property (copy, nonatomic) NSDictionary *additionalPayload;
@property (copy, nonatomic) NSURLRequest *continuationRequest;

@end
