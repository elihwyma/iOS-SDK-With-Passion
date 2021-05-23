/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INIntentDescriptionExport <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *responseName;
@property (nonatomic, readonly) Class facadeClass;
@property (nonatomic, readonly) Class dataClass;
@property (copy, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool isPrivate;
@property (nonatomic, readonly) SEL handleSelector;
@property (nonatomic, readonly) SEL confirmSelector;

- (unsigned short)init;

@end
