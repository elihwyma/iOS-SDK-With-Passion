/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class DEDExtensionIdentifier, NSDate, NSDictionary, NSString;

@interface DEDDeferredExtensionInfo : NSObject

{
    _Bool _scheduled;
    NSString *_activityString;
    NSString *_bugSessionIdentifier;
    DEDExtensionIdentifier *_dedIdentifier;
    NSDate *_triggerDate;
    double _gracePeriod;
    NSDictionary *_parameters;
}

@property (readonly) NSString *bugSessionIdentifier;
@property (readonly) DEDExtensionIdentifier *dedIdentifier;
@property (retain, nonatomic) NSDate *triggerDate;
@property (nonatomic) double gracePeriod;
@property (retain) NSDictionary *parameters;
@property _Bool scheduled;
@property (nonatomic, readonly) NSString *activityString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (void)checkIn;
+ (id)log;
+ (id)archivedClasses;
+ (id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2;
+ (id)allInfo;
+ (double)recommendedGracePeriodForDate:(id)arg1;

- (void)run;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)schedule;
- (void)unschedule;
- (id)criteria;
- (_Bool)isOverdue;
- (void)removeFromStore;
- (id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4;
- (void)addToStore;

@end
