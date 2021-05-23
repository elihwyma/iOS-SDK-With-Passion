/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <SymptomAnalytics/Process.h>

@class NSOrderedSet, NSSet, SFAppCalendarUsage;

@interface SFApp : Process

@property (retain, nonatomic) NSSet *hasAppRun;
@property (retain, nonatomic) NSSet *hasCalendarUsage;
@property (retain, nonatomic) NSOrderedSet *hasTypicalUsage;
@property (retain, nonatomic) SFAppCalendarUsage *hintCalendarUsage;

+ (id)fetchRequest;
+ (id)entityName;

- (void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2;

@end
