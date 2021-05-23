/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBAction, BBImage, NSData, NSString;

@interface BBButton : NSObject

{
    NSString *_title;
    BBImage *_image;
    BBAction *_action;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBImage *image;
@property (copy, nonatomic) BBAction *action;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic, readonly) NSData *glyphData;

+ (_Bool)supportsSecureCoding;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;

@end
