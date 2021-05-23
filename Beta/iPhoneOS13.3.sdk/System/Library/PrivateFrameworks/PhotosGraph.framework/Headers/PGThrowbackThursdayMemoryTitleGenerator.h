/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator

{
    long long _numberOfYearsAgo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)titleGenerator:(id)arg1 inputForArgument:(id)arg2;
- (id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2;

@end
