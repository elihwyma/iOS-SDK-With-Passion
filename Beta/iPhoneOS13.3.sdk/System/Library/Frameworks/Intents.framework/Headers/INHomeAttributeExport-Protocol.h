/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INHomeAttributeExport <Swift>

@property (nonatomic) long long type;
@property (nonatomic) long long valueType;
@property (nonatomic) _Bool boolValue;
@property (nonatomic) double doubleValue;
@property (copy, nonatomic) NSString *stringValue;

- (unsigned short)init;

@end
