/*
 Image: /System/Library/PrivateFrameworks/HID.framework/HID
 */

#import <IOKit/HIDElement.h>

@class NSArray, NSData;

@interface HIDElement (HIDFramework)

@property (readonly) HIDElement *parent;
@property (readonly) NSArray *children;
@property long long integerValue;
@property NSData *dataValue;
@property (readonly) long long type;
@property (readonly) long long usagePage;
@property (readonly) long long usage;
@property (readonly) long long reportID;
@property (readonly) long long reportSize;
@property (readonly) long long unit;
@property (readonly) long long unitExponent;
@property (readonly) long long logicalMin;
@property (readonly) long long logicalMax;
@property (readonly) long long physicalMin;
@property (readonly) long long physicalMax;
@property (readonly) unsigned long long timestamp;

- (id)description;
- (unsigned int)cookie;
- (void)setValueRef:(struct __IOHIDValue *)arg1;
- (struct __IOHIDValue *)valueRef;
- (double)scaleValue:(long long)arg1;

@end
