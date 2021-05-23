/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, PHAsset;

@interface PHANotificationOptions : NSObject

{
    unsigned char _type;
    NSString *_title;
    NSString *_subtitle;
    NSString *_bodyText;
    NSDate *_deliveryDate;
    NSDate *_expirationDate;
    NSDictionary *_userInfo;
    PHAsset *_keyAsset;
    NSString *_collectionUUID;
}

@property (nonatomic, readonly) unsigned char type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *bodyText;
@property (retain, nonatomic) NSDate *deliveryDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) NSString *collectionUUID;

+ (id)stringFromNotificationType:(unsigned char)arg1;

- (id)description;
- (id)initWithType:(unsigned char)arg1;

@end
