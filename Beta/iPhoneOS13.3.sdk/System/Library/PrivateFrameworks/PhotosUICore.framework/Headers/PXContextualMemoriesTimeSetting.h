/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateFormatter, NSString;

@interface PXContextualMemoriesTimeSetting : NSObject

{
    NSDate *_date;
    NSDateFormatter *_dateFormatter;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (void)resetToDefault;
- (id)_forceMiddayDateForDate:(id)arg1;

@end
