/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCVersionsFileProvider : BRCFileProvider

{
    NSMutableDictionary *_operationsByName;
}

- (id)_fileReactorID;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_physicalURLForURL:(id)arg1;
- (id)initWithVolume:(id)arg1;
- (void)dumpToContext:(id)arg1;

@end
