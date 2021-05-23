/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCFeedViewportDiff : NSObject

{
    NSString *_viewportIdentifier;
    NSArray *_insertedElements;
    NSDictionary *_insertedElementsIndices;
    NSArray *_deletedElements;
    NSDictionary *_deletedElementsIndices;
    NSArray *_modifiedElements;
    NSDictionary *_modifiedElementsIndices;
    NSArray *_groupDiffs;
}

@property (copy, nonatomic, readonly) NSString *viewportIdentifier;
@property (copy, nonatomic, readonly) NSArray *insertedElements;
@property (copy, nonatomic, readonly) NSDictionary *insertedElementsIndices;
@property (copy, nonatomic, readonly) NSArray *deletedElements;
@property (copy, nonatomic, readonly) NSDictionary *deletedElementsIndices;
@property (copy, nonatomic, readonly) NSArray *modifiedElements;
@property (copy, nonatomic, readonly) NSDictionary *modifiedElementsIndices;
@property (copy, nonatomic, readonly) NSArray *groupDiffs;
@property (nonatomic, readonly) _Bool isEmpty;

- (id)init;
- (id)initWithViewportIdentifier:(id)arg1 insertedElements:(id)arg2 insertedElementsIndices:(id)arg3 deletedElements:(id)arg4 deletedElementsIndices:(id)arg5 modifiedElements:(id)arg6 modifiedElementsIndices:(id)arg7 groupDiffs:(id)arg8;

@end
