/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, TVPSecureKeyRequest;

__attribute__((visibility("hidden")))
@interface TVPSecureKeyResponse : NSObject

{
    NSData *_keyData;
    NSDate *_renewalDate;
    TVPSecureKeyRequest *_request;
}

@property (retain, nonatomic) NSData *keyData;
@property (retain, nonatomic) NSDate *renewalDate;
@property (retain, nonatomic) TVPSecureKeyRequest *request;

@end
