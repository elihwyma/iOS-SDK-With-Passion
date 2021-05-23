/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

@interface ENEncryptedContentInfo : NSObject

{
    NSString *_hint;
    NSString *_cipher;
    long long _keyLength;
    NSMutableString *_cipherText;
}

@property (copy, nonatomic) NSString *cipher;
@property long long keyLength;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) NSMutableString *cipherText;

- (id)init;

@end
