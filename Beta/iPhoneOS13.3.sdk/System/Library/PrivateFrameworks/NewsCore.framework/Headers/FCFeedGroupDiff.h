/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface FCFeedGroupDiff : NSObject

{
    NSString *_groupIdentifier;
    NSArray *_insertedElements;
    NSArray *_deletedElements;
    NSArray *_modifiedElements;
    NSArray *_insertedHeadlines;
    NSArray *_deletedHeadlines;
    NSArray *_modifiedHeadlines;
}

@property (copy, nonatomic, readonly) NSString *groupIdentifier;
@property (copy, nonatomic, readonly) NSArray *insertedElements;
@property (copy, nonatomic, readonly) NSArray *deletedElements;
@property (copy, nonatomic, readonly) NSArray *modifiedElements;
@property (copy, nonatomic, readonly) NSArray *insertedHeadlines;
@property (copy, nonatomic, readonly) NSArray *deletedHeadlines;
@property (copy, nonatomic, readonly) NSArray *modifiedHeadlines;
@property (nonatomic, readonly) _Bool isEmpty;

- (id)init;
- (id)initWithGroupIdentifier:(id)arg1 insertedElements:(id)arg2 deletedElements:(id)arg3 modifiedElements:(id)arg4;

@end
