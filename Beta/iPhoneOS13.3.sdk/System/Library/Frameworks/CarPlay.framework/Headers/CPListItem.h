/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPImageSet, NSString, NSUUID, UIImage;

@interface CPListItem : NSObject

{
    _Bool _showsDisclosureIndicator;
    NSString *_text;
    NSString *_detailText;
    id _userInfo;
    CPImageSet *_imageSet;
    NSUUID *_identifier;
}

@property (retain, nonatomic) CPImageSet *imageSet;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSString *text;
@property (copy, nonatomic, readonly) NSString *detailText;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) _Bool showsDisclosureIndicator;
@property (retain, nonatomic) id userInfo;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 detailText:(id)arg2;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3;
- (id)initWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showsDisclosureIndicator:(_Bool)arg4;

@end
