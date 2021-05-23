/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TUCallGroup : NSObject

{
    NSArray *_calls;
}

@property (copy, nonatomic, readonly) NSArray *calls;
@property (nonatomic, readonly) int status;
@property (copy, nonatomic, readonly) NSString *displayName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCalls:(id)arg1;
- (id)initWithCall:(id)arg1;
- (_Bool)isEqualToCallGroup:(id)arg1;

@end
