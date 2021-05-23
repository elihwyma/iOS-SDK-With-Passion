/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IDSCTPNRInfo : NSObject

{
    NSString *_PLMN;
    NSString *_IMSI;
    NSString *_PNRPhoneNumber;
    NSString *_phoneBookNumber;
}

@property (retain, nonatomic) NSString *PLMN;
@property (retain, nonatomic) NSString *IMSI;
@property (retain, nonatomic) NSString *PNRPhoneNumber;
@property (retain, nonatomic) NSString *phoneBookNumber;

- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4;

@end
