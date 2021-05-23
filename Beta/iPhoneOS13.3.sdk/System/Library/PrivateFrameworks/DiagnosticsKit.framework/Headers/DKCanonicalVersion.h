/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DKCanonicalVersion : NSObject

{
    NSString *_string;
    NSArray *_parts;
}

@property (retain) NSArray *parts;
@property (nonatomic, readonly) NSString *string;

+ (_Bool)supportsSecureCoding;
+ (id)canonicalVersionWithString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (_Bool)isNewerThan:(id)arg1;
- (id)_parseParts:(id)arg1;
- (_Bool)isEqualToCanonicalVersion:(id)arg1;

@end
