/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillValue : NSObject

{
    _Bool _selected;
    NSString *_label;
    NSString *_displayValue;
    NSArray *_matches;
}

@property (nonatomic) _Bool selected;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *displayValue;
@property (copy, nonatomic, readonly) NSArray *matches;

- (id)initWithMatches:(id)arg1 displayValue:(id)arg2 label:(id)arg3;

@end
