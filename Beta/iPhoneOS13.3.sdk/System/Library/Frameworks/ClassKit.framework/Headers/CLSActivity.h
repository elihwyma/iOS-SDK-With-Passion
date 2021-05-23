/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class CLSActivityItem, NSArray, NSDate, NSString;

@interface CLSActivity : CLSObject

{
    _Bool _paused;
    NSDate *_activityStartDate;
    NSString *_primaryActivityItemIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *primaryActivityItemIdentifier;
@property (nonatomic) double progress;
@property (nonatomic, readonly) double duration;
@property (retain, nonatomic) CLSActivityItem *primaryActivityItem;
@property (nonatomic, readonly) NSArray *additionalActivityItems;

+ (_Bool)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (void)pause;
- (void)resume;
- (_Bool)isStarted;
- (void)stop;
- (void)start;
- (id)dictionaryRepresentation;
- (long long)effectiveAuthorizationStatus;
- (void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2;
- (double)runningDelta;
- (void)_generateTimeInterval;
- (id)activityItemWithIdentifier:(id)arg1;
- (_Bool)validatePrimaryActivityItemType:(id)arg1;
- (_Bool)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)_isObjectPrimaryItem:(id)arg1;
- (void)addAdditionalActivityItem:(id)arg1;

@end
