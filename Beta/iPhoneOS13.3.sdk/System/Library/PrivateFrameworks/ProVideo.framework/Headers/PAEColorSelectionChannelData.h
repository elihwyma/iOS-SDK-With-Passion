/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PAEColorSelectionChannelData : NSObject

{
    int _mode;
    int _state;
    int _action;
    int _style;
    double _x;
    double _y;
    double _radius;
    double _radiusScale;
    double _frame;
    int _timeScale;
}

@property int mode;
@property int state;
@property int action;
@property int style;
@property double x;
@property double y;
@property double radius;
@property double radiusScale;
@property double frame;
@property int timeScale;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
