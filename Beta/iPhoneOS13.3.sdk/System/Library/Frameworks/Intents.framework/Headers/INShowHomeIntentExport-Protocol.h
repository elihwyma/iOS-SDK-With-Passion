/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray;

@protocol INShowHomeIntentExport <Swift>

@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) INDateComponentsRange *time;

- (unsigned short)init;

@end
