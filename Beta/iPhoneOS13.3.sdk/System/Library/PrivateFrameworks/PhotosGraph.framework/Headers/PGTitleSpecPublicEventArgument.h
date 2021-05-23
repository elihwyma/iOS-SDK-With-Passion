/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecPublicEventArgument : PGTitleSpecArgument

{
    _Bool _shouldUseLongPublicEventTitle;
    unsigned long long _type;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) _Bool shouldUseLongPublicEventTitle;

+ (id)_cleanUpEventName:(id)arg1;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1;
+ (id)argumentWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;

- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)initWithPublicEventType:(unsigned long long)arg1;
- (id)initWithPublicEventType:(unsigned long long)arg1 shouldUseLongPublicEventTitle:(_Bool)arg2;
- (id)_resolvedStringWithPublicEventNode:(id)arg1 inMomentNodes:(id)arg2;
- (id)_commonPublicEventNodeForMomentNodes:(id)arg1;
- (id)_generateTitleWithEventNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithBusinessNameForPublicEventNode:(id)arg1;
- (id)_generateTitleWithPerformerNamesForPublicEventNode:(id)arg1;
- (id)_generateTitleWithCategoryNameForPublicEventNode:(id)arg1;

@end
