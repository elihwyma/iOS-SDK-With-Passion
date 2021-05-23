/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface _MXExtensionBaseMapResponse : NSObject

{
    NSSet *_namedImages;
    NSSet *_features;
}

@property (copy, nonatomic) NSSet *namedImages;
@property (copy, nonatomic) NSSet *features;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
