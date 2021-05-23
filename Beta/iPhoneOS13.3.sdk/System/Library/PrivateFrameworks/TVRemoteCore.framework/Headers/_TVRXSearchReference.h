/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer;

@interface _TVRXSearchReference : NSObject

{
    NSString *_identifier;
    id _completionBlock;
    NSTimer *_expirationTimer;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id completionBlock;
@property (weak, nonatomic) NSTimer *expirationTimer;

@end
