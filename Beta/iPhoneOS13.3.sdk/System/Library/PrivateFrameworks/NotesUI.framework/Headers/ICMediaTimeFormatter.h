/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSDateComponentsFormatter.h>

@interface ICMediaTimeFormatter : NSDateComponentsFormatter

+ (id)wordyFormatter;
+ (id)timecodeFormatter;

- (id)stringForObjectValue:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;

@end
