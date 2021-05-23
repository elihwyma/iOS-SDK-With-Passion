/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray;

@interface VUIMediaEntityFetchResponse : NSObject <Swift>

{
    NSArray *_mediaEntities;
    NSArray *_sortIndexes;
    NSArray *_grouping;
    NSArray *_groupingSortIndexes;
    unsigned long long _mediaEntitySubtype;
}

@property (nonatomic) unsigned long long mediaEntitySubtype;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;
@property (copy, nonatomic) NSArray *grouping;
@property (copy, nonatomic) NSArray *groupingSortIndexes;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_updateWithResponse:(id)arg1 changes:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;

@end
