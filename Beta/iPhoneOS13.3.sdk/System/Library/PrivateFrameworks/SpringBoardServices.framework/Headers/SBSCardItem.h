/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, UIImage;

@interface SBSCardItem : NSObject

{
    _Bool _requiresPasscode;
    NSString *_identifier;
    NSString *_categoryIdentifier;
    NSData *_iconData;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_bundleName;
    NSDictionary *_userInfo;
    UIImage *_thumbnail;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSData *iconData;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) _Bool requiresPasscode;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) UIImage *thumbnail;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 categoryIdentifier:(id)arg2 iconData:(id)arg3 title:(id)arg4 subtitle:(id)arg5 body:(id)arg6 requiresPasscode:(_Bool)arg7 bundleName:(id)arg8 userInfo:(id)arg9;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(_Bool)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)sortDate;

@end
