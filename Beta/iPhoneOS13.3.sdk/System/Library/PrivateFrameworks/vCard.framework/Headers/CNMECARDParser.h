/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@interface CNMECARDParser : NSObject

+ (id)parseString:(id)arg1 resultFactory:(id)arg2 error:(id *)arg3;
+ (void)enumerateTagsInString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
