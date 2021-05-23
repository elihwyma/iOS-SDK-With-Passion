/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFContactAutoFillValue;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillPropertyValues : NSObject

{
    long long _selectedIndex;
    NSArray *_values;
    NSString *_property;
}

@property (nonatomic) long long selectedIndex;
@property (nonatomic, readonly) SFContactAutoFillValue *selectedValue;
@property (copy, nonatomic, readonly) NSArray *values;
@property (copy, nonatomic, readonly) NSString *property;

- (id)initWithValues:(id)arg1 property:(id)arg2;

@end
