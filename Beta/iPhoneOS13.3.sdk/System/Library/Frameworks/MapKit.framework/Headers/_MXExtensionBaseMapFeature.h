/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _MXExtensionBaseMapFeature : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_iconName;
    struct CLLocationCoordinate2D _coordinate;
}

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (retain, nonatomic) NSString *iconName;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
