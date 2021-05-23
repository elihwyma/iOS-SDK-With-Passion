/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NBPhoneNumberDesc : NSObject

{
    NSString *_nationalNumberPattern;
    NSString *_possibleNumberPattern;
    NSString *_exampleNumber;
}

@property (retain, nonatomic) NSString *nationalNumberPattern;
@property (retain, nonatomic) NSString *possibleNumberPattern;
@property (retain, nonatomic) NSString *exampleNumber;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithNationalNumberPattern:(id)arg1 withPossibleNumberPattern:(id)arg2 withExample:(id)arg3;

@end
