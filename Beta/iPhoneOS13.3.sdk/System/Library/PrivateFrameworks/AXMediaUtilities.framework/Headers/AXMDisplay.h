/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXMDisplay : NSObject

{
    _Bool _supportsDeepColor;
    NSString *_name;
    double _scale;
    double _orientation;
    long long _physicalOrientation;
    long long _backingType;
    struct CGSize _size;
    struct CGRect _referenceBounds;
}

@property (nonatomic) long long backingType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double orientation;
@property (nonatomic) long long physicalOrientation;
@property (nonatomic) struct CGRect referenceBounds;
@property (nonatomic) _Bool supportsDeepColor;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)convertRectToDisplay:(struct CGRect)arg1;
- (id)_initWithBackingType:(long long)arg1;
- (struct CGPoint)convertPointToDisplay:(struct CGPoint)arg1;

@end
