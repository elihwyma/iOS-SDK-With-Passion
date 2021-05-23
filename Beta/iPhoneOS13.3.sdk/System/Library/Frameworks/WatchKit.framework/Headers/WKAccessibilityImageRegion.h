/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WKAccessibilityImageRegion : NSObject

{
    NSString *_label;
    struct CGRect _frame;
}

@property (nonatomic) struct CGRect frame;
@property (copy, nonatomic) NSString *label;

@end
