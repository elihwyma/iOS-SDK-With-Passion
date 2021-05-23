/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INSearchForNotebookItemsIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSArray *notes;
@property (copy, nonatomic) NSArray *taskLists;
@property (copy, nonatomic) NSArray *tasks;
@property (nonatomic) long long sortType;

@end
