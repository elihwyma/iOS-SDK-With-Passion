/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXDateRange : NSObject <Swift>

{
    double _startDate;
    double _endDate;
}

@property (readonly) double startDate;
@property (readonly) double endDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;
- (_Bool)intersectsRange:(id)arg1;
- (_Bool)isStrictlyBeforeRange:(id)arg1;

@end
