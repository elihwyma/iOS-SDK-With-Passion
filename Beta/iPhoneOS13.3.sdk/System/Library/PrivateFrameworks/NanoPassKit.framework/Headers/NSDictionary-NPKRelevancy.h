/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (NPKRelevancy)

@property (readonly) NSString *npkRelevancyUniqueID;
@property (readonly) NSString *npkRelevancyRelevantText;

+ (id)npkRelevancyTupleWithUniqueID:(id)arg1 relevantText:(id)arg2;

- (id)npk_objectForKey:(id)arg1 class:(Class)arg2;

@end
