/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BBContent : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *message;

+ (_Bool)supportsSecureCoding;
+ (id)contentWithTitle:(id)arg1 subtitle:(id)arg2 message:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToContent:(id)arg1;

@end
