/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol INGenericIntent <Swift>

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *verb;
@property (copy, nonatomic) NSDictionary *parametersByName;

- (unsigned short)isGenericIntent;

@end
