/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol INIntentResponseDescriptionExport <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) Class facadeClass;
@property (nonatomic, readonly) Class dataClass;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrivate;
@property (copy, nonatomic, readonly) NSDictionary *slotsByName;

- (unsigned short)init;

@end
