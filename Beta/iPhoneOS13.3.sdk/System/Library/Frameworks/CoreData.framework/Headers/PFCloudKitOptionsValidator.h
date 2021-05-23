/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringDelegateOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitOptionsValidator : NSObject

{
    NSCloudKitMirroringDelegateOptions *_parsedOptions;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *parsedOptions;

- (void)dealloc;
- (_Bool)_validateContainerIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_validateHistoryTrackingOptions:(id)arg1 error:(id *)arg2;
- (_Bool)_validateContainerOptions:(id)arg1 error:(id *)arg2;
- (_Bool)_validateAssetThreshold:(id)arg1 error:(id *)arg2;
- (_Bool)_validateMemoryThreshold:(id)arg1 error:(id *)arg2;
- (_Bool)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id *)arg3;

@end
