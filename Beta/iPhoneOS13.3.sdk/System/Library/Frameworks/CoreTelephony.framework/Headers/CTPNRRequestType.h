/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSNumber;

@interface CTPNRRequestType : NSObject

{
    NSData *_pushToken;
    NSNumber *_attemptCount;
    NSArray *_pnrReqList;
}

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSNumber *attemptCount;
@property (retain, nonatomic) NSArray *pnrReqList;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCTPNRRequestType:(id)arg1;

@end
