/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol VKLabelNavFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadLabel : NSObject

{
    shared_ptr_93ff9d4a _label;
    int _navLabelType;
    id <VKLabelNavFeature> _navFeature;
    NSString *_displayGroup;
    unsigned char _alignment;
    float _desiredOffsetDistance;
    unsigned int _displayID;
    _Bool _isPicked;
    Mercator2_57ec32b6 _mercatorPoint;
}

@property (nonatomic) id <VKLabelNavFeature> navFeature;
@property (nonatomic, readonly) const shared_ptr_93ff9d4a *label;
@property (nonatomic) unsigned char alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (nonatomic, readonly) _Bool isShieldLabel;
@property (nonatomic, readonly) _Bool isRoadLabel;
@property (nonatomic, readonly) _Bool isJunctionLabel;
@property (nonatomic, readonly) _Bool isManeuverLabel;
@property (nonatomic, readonly) _Bool isEtaLabel;
@property (nonatomic, readonly) _Bool isTrafficCameraLabel;
@property (nonatomic) unsigned short renderOrder;
@property (nonatomic) Mercator2_57ec32b6 mercatorPoint;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (id)initWithNavFeature:(id)arg1 label:(const shared_ptr_93ff9d4a *)arg2 navLabelType:(int)arg3;
- (id)displayGroup;

@end
