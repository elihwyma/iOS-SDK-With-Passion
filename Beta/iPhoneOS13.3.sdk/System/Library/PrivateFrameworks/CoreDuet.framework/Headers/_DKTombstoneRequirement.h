/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPredicate, NSString;

@interface _DKTombstoneRequirement : NSObject

{
    NSString *_identifier;
}

@property (readonly) NSPredicate *predicate;
@property (readonly) NSPredicate *eventPredicate;
@property (readonly) NSArray *propertiesToFetch;
@property (readonly) NSString *identifier;

+ (id)requirement;

- (void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2;

@end
