/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INListShortcutsIntentExport <Swift>

@property (nonatomic) long long originDevice;
@property (copy, nonatomic) NSArray *appTitles;

- (unsigned short)init;

@end
