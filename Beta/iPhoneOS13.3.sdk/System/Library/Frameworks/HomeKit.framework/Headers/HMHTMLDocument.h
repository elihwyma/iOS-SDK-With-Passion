/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSAttributedString, NSString;

@interface HMHTMLDocument : NSObject <Swift>

{
    NSString *_stringValue;
}

@property (copy, readonly) NSString *stringValue;
@property (copy, readonly) NSAttributedString *attributedString;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (_Bool)validateAndReturnError:(id *)arg1;

@end
