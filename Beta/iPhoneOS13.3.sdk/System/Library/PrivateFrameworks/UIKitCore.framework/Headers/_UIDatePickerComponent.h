/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerComponent : NSObject

{
    unsigned long long _equivalentUnit;
    NSString *_formatString;
    unsigned long long _calendarUnit;
    double _width;
    struct _NSRange _unitRange;
}

@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) unsigned long long calendarUnit;
@property (nonatomic, readonly) unsigned long long equivalentUnit;
@property (nonatomic) struct _NSRange unitRange;
@property (nonatomic) double width;

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3;
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2;

- (id)description;
- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2;

@end
