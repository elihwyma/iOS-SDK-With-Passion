/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INStartVideoCallIntentExport <Swift>

@property (nonatomic) long long audioRoute;
@property (copy, nonatomic) NSArray *contacts;

- (unsigned short)init;

@end
