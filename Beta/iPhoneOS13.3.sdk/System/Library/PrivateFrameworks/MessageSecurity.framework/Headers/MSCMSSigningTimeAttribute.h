/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface MSCMSSigningTimeAttribute : NSObject

{
    NSDate *_signingTime;
}

@property (retain, readonly) NSDate *signingTime;

- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithSigningTime:(id)arg1;

@end
