/*
 Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EventToDictionaryConverter : NSObject

+ (id)paramTypeToNSString:(unsigned long long)arg1;
+ (id)eventTypeToNSString:(unsigned long long)arg1;
+ (id)convertEvents:(id)arg1;

@end
