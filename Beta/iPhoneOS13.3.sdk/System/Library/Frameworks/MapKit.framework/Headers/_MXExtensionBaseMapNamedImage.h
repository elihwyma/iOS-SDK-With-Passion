/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, UIImage;

@interface _MXExtensionBaseMapNamedImage : NSObject

{
    NSString *_name;
    NSData *_data;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) UIImage *image;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
