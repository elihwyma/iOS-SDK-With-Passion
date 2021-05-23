/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MTChange : NSObject

{
    NSString *_property;
    id _changedValue;
    id _originalValue;
}

@property (copy, nonatomic) NSString *property;
@property (retain, nonatomic) id changedValue;
@property (retain, nonatomic) id originalValue;

- (id)description;
- (id)initWithProperty:(id)arg1 changedValue:(id)arg2 originalValue:(id)arg3;

@end
