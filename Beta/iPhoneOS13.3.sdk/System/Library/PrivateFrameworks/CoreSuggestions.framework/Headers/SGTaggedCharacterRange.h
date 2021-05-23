/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SGTaggedCharacterRange : NSObject

{
    unsigned long long _annotationType;
    NSArray *_tags;
    NSString *_text;
    struct _NSRange _range;
}

@property (nonatomic, readonly) unsigned long long annotationType;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) struct _NSRange range;
@property (nonatomic, readonly) NSString *text;

+ (id)describeAnnotationType:(unsigned long long)arg1;
+ (id)annotationTypeUniqueIdentifier:(unsigned long long)arg1;
+ (unsigned long long)annotationTypeFromString:(id)arg1;
+ (id)enrichAndFilterTaggedCharacterRanges:(id)arg1 usingMapping:(id)arg2 withAnnotationType:(unsigned long long)arg3;
+ (id)mergeTagsFromTaggedCharacterRanges:(id)arg1 withTaggedCharacterRanges:(id)arg2;
+ (id)mergeTaggedCharacterRanges:(id)arg1 usingBaseTaggedCharacterRanges:(id)arg2 extraTags:(id)arg3 tagOverrides:(id)arg4 alignWithGroundTruth:(id)arg5;
+ (id)flattenTaggedCharacterRanges:(id)arg1 usingWhitelist:(id)arg2 replaceOOVWithToken:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDict:(id)arg1;
- (id)dictRepresentation;
- (id)initWithAnnotationType:(unsigned long long)arg1 tags:(id)arg2 range:(struct _NSRange)arg3 text:(id)arg4;
- (_Bool)isEqualToTaggedCharacterRange:(id)arg1;
- (id)annotationTypeUniqueIdentifier;

@end
