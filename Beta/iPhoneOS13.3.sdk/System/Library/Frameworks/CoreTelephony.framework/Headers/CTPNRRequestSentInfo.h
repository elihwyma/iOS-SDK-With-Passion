/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface CTPNRRequestSentInfo : NSObject

{
    _Bool _success;
    NSString *_token;
    NSNumber *_timeout;
}

@property (nonatomic) _Bool success;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSNumber *timeout;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTPNRRequestSentInfo:(id)arg1;

@end
