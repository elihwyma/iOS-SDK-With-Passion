/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CTSubscriberAuthResult : NSObject

{
    NSData *_auts;
    NSData *_res;
    NSData *_sres;
    NSData *_kc;
    NSData *_ck;
    NSData *_ik;
}

@property (retain, nonatomic) NSData *auts;
@property (retain, nonatomic) NSData *res;
@property (retain, nonatomic) NSData *sres;
@property (retain, nonatomic) NSData *kc;
@property (retain, nonatomic) NSData *ck;
@property (retain, nonatomic) NSData *ik;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
