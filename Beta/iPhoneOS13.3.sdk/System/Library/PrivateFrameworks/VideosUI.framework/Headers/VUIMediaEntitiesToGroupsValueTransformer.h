/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntitiesToGroupsValueTransformer : NSValueTransformer

{
    _Bool _performDefaultSort;
    NSString *_identifierKeyPath;
    NSString *_sortIndexKeyPath;
    CDUnknownBlockType _groupsSortComparator;
}

@property (copy, nonatomic) NSString *identifierKeyPath;
@property (copy, nonatomic) NSString *sortIndexKeyPath;
@property (copy, nonatomic) CDUnknownBlockType groupsSortComparator;
@property (nonatomic) _Bool performDefaultSort;

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)init;
- (id)transformedValue:(id)arg1;
- (id)initWithIdentifierKeyPath:(id)arg1;

@end
