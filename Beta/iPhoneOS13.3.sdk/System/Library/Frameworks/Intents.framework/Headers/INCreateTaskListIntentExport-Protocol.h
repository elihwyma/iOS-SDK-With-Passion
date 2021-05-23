/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSArray;

@protocol INCreateTaskListIntentExport <Swift>

@property (copy, nonatomic) INSpeakableString *title;
@property (copy, nonatomic) NSArray *taskTitles;
@property (copy, nonatomic) INSpeakableString *groupName;

- (unsigned short)init;

@end
