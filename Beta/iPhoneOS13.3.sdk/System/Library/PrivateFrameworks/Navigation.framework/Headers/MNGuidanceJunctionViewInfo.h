/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUUID;

@interface MNGuidanceJunctionViewInfo : NSObject

{
    NSUUID *_uniqueID;
    NSArray *_images;
}

@property (nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly) NSArray *images;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 images:(id)arg2;

@end
