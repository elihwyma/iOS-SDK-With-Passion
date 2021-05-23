/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface LPMultipleMetadataPresentationTransformer : NSObject

{
    NSArray *_metadata;
    NSDictionary *_summaryCounts;
    _Bool _hasOnlyFiles;
}

- (id)summary;
- (id)initWithMetadata:(id)arg1;
- (id)summaryMetadata;
- (id)_summaryCounts;
- (id)_summarySubtitle;
- (id)summaryImages;

@end
