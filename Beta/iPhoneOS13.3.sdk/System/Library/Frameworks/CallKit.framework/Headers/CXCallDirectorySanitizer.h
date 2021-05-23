/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet;

@interface CXCallDirectorySanitizer : NSObject

{
    NSCharacterSet *_phoneNumbersCharacterSet;
    NSCharacterSet *_nonPhoneNumbersCharacterSet;
    NSCharacterSet *_phoneNumbersIgnoredCharacterSet;
}

@property (nonatomic, readonly) NSCharacterSet *phoneNumbersCharacterSet;
@property (nonatomic, readonly) NSCharacterSet *nonPhoneNumbersCharacterSet;
@property (nonatomic, readonly) NSCharacterSet *phoneNumbersIgnoredCharacterSet;

- (id)init;
- (id)canonicalizedPhoneNumber:(id)arg1;

@end
