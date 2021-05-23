/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (EvernoteSDK)

@property (nonatomic, readonly) NSData *enmd5;
@property (nonatomic, readonly) NSString *enlowercaseHexDigits;

+ (id)endataWithHexDigits:(id)arg1;

@end
