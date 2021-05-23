/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CRSIconLayoutPage : NSObject

{
    NSArray *_icons;
}

@property (nonatomic, readonly) NSArray *icons;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIcons:(id)arg1;

@end
