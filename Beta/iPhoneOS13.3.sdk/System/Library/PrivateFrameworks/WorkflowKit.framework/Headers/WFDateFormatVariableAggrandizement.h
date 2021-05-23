/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) NSString *dateStyle;
@property (nonatomic, readonly) NSString *timeStyle;
@property (nonatomic, readonly) NSString *relativeDateStyle;
@property (nonatomic, readonly) NSString *customDateFormat;
@property (nonatomic, readonly) _Bool includesTimeForISO8601;

+ (id)defaultAggrandizement;

- (id)processedContentClasses:(id)arg1;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(_Bool)arg5;
- (id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2;
- (id)initWithRelativeTimeStyle;
- (id)initWithISO8601DateStyleAndTime:(_Bool)arg1;
- (id)initWithRFC2822DateStyle;
- (id)initWithCustomDateFormat:(id)arg1;

@end
