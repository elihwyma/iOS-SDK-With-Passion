/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLHealthAssessmentRecordTypeForDuration : NSObject

{
    int _dataType;
    double _duration;
}

@property double duration;
@property int dataType;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
