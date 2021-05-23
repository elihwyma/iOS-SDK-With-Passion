/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Photos/PHPhotosHighlightChangeRequest.h>

@class NSString;

@interface PHPhotosHighlightChangeRequest (HighlightModelProtocol)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *dateDescription;
@property (retain, nonatomic) NSString *smartDescription;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) unsigned short enrichmentState;

- (void)clearCurations;
- (void)enumerateMomentChangeRequestsForUUIDs:(id)arg1 inPhotoLibrary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end
