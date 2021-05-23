/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/CRBasicPayloadCommand.h>

@class NSDictionary, NSString, SFPunchout;

@protocol NSSecureCoding><NSCopying;

@interface CRPunchoutCommand : CRBasicPayloadCommand

{
    SFPunchout *_punchout;
}

@property (retain, nonatomic) SFPunchout *punchout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
