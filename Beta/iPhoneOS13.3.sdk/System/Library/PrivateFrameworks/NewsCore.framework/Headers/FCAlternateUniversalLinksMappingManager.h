/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCFetchedValueManager;

@interface FCAlternateUniversalLinksMappingManager : NSObject

{
    FCFetchedValueManager *_updateValueManager;
}

@property (nonatomic, readonly) FCFetchedValueManager *updateValueManager;

- (id)init;
- (id)initWithMappingDirectoryFileURL:(id)arg1 contentContext:(id)arg2;
- (void)installMappingFilesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
