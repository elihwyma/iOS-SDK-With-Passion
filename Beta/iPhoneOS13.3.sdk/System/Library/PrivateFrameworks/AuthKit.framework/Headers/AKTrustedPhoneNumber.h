/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface AKTrustedPhoneNumber : NSObject

{
    NSNumber *_identifier;
    NSString *_numberWithDialCode;
    NSString *_obfuscatedNumber;
    NSString *_pushMode;
}

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *numberWithDialCode;
@property (retain, nonatomic) NSString *obfuscatedNumber;
@property (retain, nonatomic) NSString *pushMode;

- (id)description;
- (id)initWithJSONDictionary:(id)arg1;

@end
