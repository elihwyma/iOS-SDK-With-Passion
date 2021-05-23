/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@interface CNVCardActivityAlertSerialization : NSObject

+ (id)stringWithType:(id)arg1 info:(id)arg2;
+ (void)parseString:(id)arg1 intoTypeAndInfo:(CDUnknownBlockType)arg2;
+ (id)dictionaryWithType:(id)arg1 info:(id)arg2;
+ (id)activityAlertWithString:(id)arg1;
+ (id)typeFromDictionary:(id)arg1;
+ (id)infoFromDictionary:(id)arg1;

@end
