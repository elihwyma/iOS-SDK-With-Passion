/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <PowerlogCore/PLActivityCriterion.h>

@class NSDictionary, NSString, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion

{
    NSString *_entryKey;
    CDUnknownBlockType _criterionBlock;
    NSDictionary *_filter;
    PLEntryNotificationOperatorComposition *_entryListener;
}

@property (copy) CDUnknownBlockType criterionBlock;
@property (retain) NSDictionary *filter;
@property (retain) PLEntryNotificationOperatorComposition *entryListener;
@property (readonly) NSString *entryKey;

+ (id)pluggedInCriterion;
+ (id)displayOffCriterion;
+ (id)audioOffCriterion;

- (id)description;
- (void)didEnableActivity:(id)arg1;
- (void)didDisableActivity:(id)arg1;
- (id)initWithEntryKey:(id)arg1 withFilter:(id)arg2 withCriterionBlock:(CDUnknownBlockType)arg3;
- (void)scheduleEntryListener;
- (id)initWithEntryKey:(id)arg1 withCriterionBlock:(CDUnknownBlockType)arg2;

@end
