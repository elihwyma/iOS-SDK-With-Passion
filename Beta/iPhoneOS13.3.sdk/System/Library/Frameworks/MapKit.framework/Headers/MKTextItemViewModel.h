/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTextItemViewModel : NSObject

{
    NSArray *_values;
}

@property (copy, nonatomic) NSArray *values;

- (unsigned long long)numberOfRows;
- (id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4;
- (id)stringsForRowAtIndex:(unsigned long long)arg1;

@end
