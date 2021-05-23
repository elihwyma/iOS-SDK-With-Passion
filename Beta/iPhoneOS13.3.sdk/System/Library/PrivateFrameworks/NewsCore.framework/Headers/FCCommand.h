/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCCommand : NSObject <Swift>

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (_Bool)canCoalesceWithCommand:(id)arg1;
- (void)coalesceWithCommand:(id)arg1;
- (unsigned long long)statusForCloudKitError:(id)arg1;

@end
