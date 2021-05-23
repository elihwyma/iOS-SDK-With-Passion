/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL, UIImage;

@interface SFAirDropPayload : NSObject

{
    _Bool _wasString;
    NSURL *_URL;
    NSData *_data;
    NSString *_type;
    UIImage *_previewImage;
    NSString *_payloadDescription;
    long long _identifer;
}

@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) UIImage *previewImage;
@property (copy, nonatomic) NSString *payloadDescription;
@property (nonatomic) long long identifer;
@property (nonatomic) _Bool wasString;

+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(long long)arg5;
+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(long long)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
