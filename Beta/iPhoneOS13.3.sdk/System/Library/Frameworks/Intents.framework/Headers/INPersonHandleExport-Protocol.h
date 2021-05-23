/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSString;

@protocol INPersonHandleExport <Swift>

@property (copy, nonatomic) NSString *value;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *label;

- (unsigned short)init;

@end
