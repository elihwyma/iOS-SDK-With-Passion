/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol _INPBScoredValue <Swift>

@property (nonatomic) long long score;
@property (nonatomic) _Bool hasScore;
@property (copy, nonatomic) NSString *value;
@property (nonatomic, readonly) _Bool hasValue;

@end
