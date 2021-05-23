/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface SKDownloadInternal : NSObject

{
    NSNumber *_downloadID;
    NSString *_productID;
    long long _state;
    float _progress;
    NSError *_error;
    NSURL *_contentURL;
    double _timeRemaining;
    NSNumber *_contentLength;
    NSString *_contentVersion;
    SKPaymentTransaction *_transaction;
}

@end
