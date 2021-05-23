/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/CRBasicPayloadCommand.h>

@class NSDictionary, NSString;

@protocol CRCard, NSSecureCoding><NSCopying;

@interface CRNextCardCommand : CRBasicPayloadCommand

{
    id <CRCard> _nextCard;
}

@property (retain, nonatomic) id <CRCard> nextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long commandDirection;
@property (retain, nonatomic) id <NSSecureCoding><NSCopying> payload;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
