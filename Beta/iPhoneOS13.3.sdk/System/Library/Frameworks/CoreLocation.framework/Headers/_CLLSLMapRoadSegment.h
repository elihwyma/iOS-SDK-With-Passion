/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _CLLSLMapRoadSegment : NSObject

{
    unsigned long long _roadID;
    NSArray *_polylines;
}

@property (nonatomic) unsigned long long roadID;
@property (copy, nonatomic) NSArray *polylines;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;

@end
