/*
 Image: /System/Library/PrivateFrameworks/HIDAnalytics.framework/HIDAnalytics
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HIDAnalyticsEventField : NSObject

{
    unsigned long long integerValue;
    NSString *_fieldName;
}

@property (readonly) NSString *fieldName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) id value;

- (id)initWithName:(id)arg1;
- (void)setIntegerValue:(unsigned long long)arg1;

@end
