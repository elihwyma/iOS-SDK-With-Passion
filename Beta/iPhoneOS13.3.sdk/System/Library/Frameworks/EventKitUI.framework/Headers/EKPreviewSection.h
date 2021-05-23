/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface EKPreviewSection : NSObject

{
    NSArray *_events;
    NSDate *_date;
}

@property (nonatomic, readonly) NSArray *events;
@property (retain, nonatomic) NSDate *date;

+ (id)sectionWithDate:(id)arg1;

- (id)initWithDate:(id)arg1;
- (void)addEvent:(id)arg1;

@end
