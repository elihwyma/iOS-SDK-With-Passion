/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CALNNotificationCategory : NSObject

{
    NSString *_identifier;
    NSArray *_actions;
    unsigned long long _options;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *hiddenPreviewsBodyPlaceholder;
@property (copy, nonatomic, readonly) NSString *categorySummaryFormat;

+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToCategory:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actions:(id)arg2 hiddenPreviewsBodyPlaceholder:(id)arg3 options:(unsigned long long)arg4 categorySummaryFormat:(id)arg5;

@end
