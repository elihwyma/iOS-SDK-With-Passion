/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject

{
    id _internal;
}

@property (copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long downloadState;
@property (nonatomic, readonly) long long contentLength;
@property (nonatomic, readonly) long long expectedContentLength;
@property (nonatomic, readonly) NSString *contentIdentifier;
@property (nonatomic, readonly) NSURL *contentURL;
@property (nonatomic, readonly) NSString *contentVersion;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic, readonly) SKPaymentTransaction *transaction;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setProgress:(float)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)_setContentLength:(id)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setDownloadState:(long long)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_applyChangeset:(id)arg1;
- (void)_setVersion:(id)arg1;

@end
