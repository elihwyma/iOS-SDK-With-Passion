/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHTemplateStore, NSCalendar;

@interface ACHEarnedInstanceDuplicateUtility : NSObject

{
    ACHTemplateStore *_templateStore;
    NSCalendar *_gregorianCalendar;
}

@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;

- (id)earnedInstancesWithoutDuplicates:(id)arg1;
- (id)earnedInstancesLimitedByEarnLimit:(id)arg1;
- (id)initWithTemplateStore:(id)arg1;

@end
