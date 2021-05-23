/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject

{
    _CLLSLMapRoadSegment *_roadSegment;
}

@property (copy, nonatomic) _CLLSLMapRoadSegment *roadSegment;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;

@end
