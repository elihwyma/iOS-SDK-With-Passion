/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface HFRoomSuggestion : NSObject

{
    NSString *_name;
    NSSet *_aliases;
    long long _priority;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSSet *aliases;
@property (nonatomic, readonly) long long priority;

+ (CDUnknownBlockType)priorityComparator;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2 aliases:(id)arg3;
+ (id)suggestionWithName:(id)arg1 priority:(long long)arg2;

@end
