/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKAlarmSemanticIdentifierGenerator : NSObject

+ (id)_stringForAlarmProximity:(long long)arg1;
+ (id)semanticIdentifierForAlarmIsDefault:(_Bool)arg1 absoluteDate:(id)arg2 relativeOffset:(id)arg3 locationSemanticIdentifier:(id)arg4 proximity:(long long)arg5;

@end
