/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGFn : NSObject

+ (id)map:(id)arg1 f:(CDUnknownBlockType)arg2;
+ (id)filter:(id)arg1 f:(CDUnknownBlockType)arg2;
+ (id)mapAndFilter:(id)arg1 f:(CDUnknownBlockType)arg2;
+ (id)parMapOnQueue:(id)arg1 concurrencyLimit:(unsigned long long)arg2 input:(id)arg3 f:(CDUnknownBlockType)arg4;

@end
