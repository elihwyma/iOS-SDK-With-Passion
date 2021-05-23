/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray;

@protocol INStartCallIntentExport <Swift>

@property (nonatomic) long long audioRoute;
@property (nonatomic) long long destinationType;
@property (nonatomic) long long preferredCallProvider;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long recordTypeForRedialing;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (nonatomic) long long callCapability;

- (unsigned short)init;

@end
