/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTask;

@protocol INSetTaskAttributeIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INTask *modifiedTask;
@property (nonatomic) unsigned long long warnings;

@end
