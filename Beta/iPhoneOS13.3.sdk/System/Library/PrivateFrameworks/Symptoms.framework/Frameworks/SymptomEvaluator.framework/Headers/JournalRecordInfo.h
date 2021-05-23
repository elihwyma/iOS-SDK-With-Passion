/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableData, NSString;

__attribute__((visibility("hidden")))
@interface JournalRecordInfo : NSObject

{
    NSString *_journalName;
    NSDate *_lastUpdate;
    NSMutableData *_journalData;
}

@property (readonly) NSString *journalName;
@property (readonly) NSDate *lastUpdate;
@property (readonly) NSMutableData *journalData;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJournalName:(id)arg1 lastUpdate:(id)arg2 journalData:(id)arg3;

@end
