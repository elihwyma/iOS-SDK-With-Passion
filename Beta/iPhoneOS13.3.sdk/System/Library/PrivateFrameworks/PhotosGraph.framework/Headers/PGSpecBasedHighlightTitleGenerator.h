/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@protocol PGEventEnrichment;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator

{
    _Bool _createVerboseTitle;
    id <PGEventEnrichment> _collection;
    NSString *_meaningLabel;
}

@property (nonatomic, readonly) id <PGEventEnrichment> collection;
@property (nonatomic, readonly) NSString *meaningLabel;
@property (nonatomic, readonly) _Bool createVerboseTitle;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(_Bool)arg3;

@end
