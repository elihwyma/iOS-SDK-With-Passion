/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, INHomeUserTask, NSArray;

@protocol INControlHomeIntentExport <Swift>

@property (copy, nonatomic) INHomeUserTask *userTask;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) INDateComponentsRange *time;
@property (copy, nonatomic) NSArray *contents;

- (unsigned short)init;

@end
