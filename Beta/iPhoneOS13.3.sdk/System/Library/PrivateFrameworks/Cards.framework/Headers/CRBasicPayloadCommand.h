/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@protocol NSSecureCoding><NSCopying;

@interface CRBasicPayloadCommand : NSObject

{
    id <NSSecureCoding><NSCopying> payload;
    NSDictionary *userInfo;
    unsigned long long commandDirection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
