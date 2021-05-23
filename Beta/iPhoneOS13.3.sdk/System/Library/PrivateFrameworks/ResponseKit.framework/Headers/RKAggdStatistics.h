/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKAggdStatistics : NSObject

+ (id)buildAggdKey:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)incrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)decrementAggdKeyForCategory:(id)arg1 forAction:(id)arg2 withLanguageID:(id)arg3;
+ (void)clearScalarValuesForLanguage:(id)arg1;

@end
