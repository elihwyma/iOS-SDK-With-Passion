/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVLazyValueLoadingMetadataItem : AVMetadataItem

{
    AVLazyValueLoadingMetadataItemInternal *_lazyMetadataItem;
}

+ (id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)value;
- (id)dataType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(CDUnknownBlockType)arg2;
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long long)_valueStatus;
- (void)_waitForLoadingOfValueDependentKey:(id)arg1;
- (void)_valueRequestDidFinish;

@end
