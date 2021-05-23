/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

#import <SecurityFoundation/Swift-Protocol.h>

@class NSString;

@interface SFCodingOptions : NSObject <Swift>

{
    id _codingOptionsInternal;
}

@property (nonatomic) long long encoding;
@property (copy, nonatomic) NSString *encryptionPassphrase;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
