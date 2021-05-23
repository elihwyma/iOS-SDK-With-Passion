/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@interface JournalTimeStamp : NSObject

+ (id)getCurrentJournalNameUsingPrefix:(id)arg1;
+ (_Bool)shouldPurgeJournal:(id)arg1 olderThan:(id)arg2;
+ (id)getDateFromJournalName:(id)arg1;
+ (id)getJournalNameUsingPrefix:(id)arg1 forDate:(id)arg2;

@end
