/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLSearchMetadataStore : NSObject

{
    NSString *_storePath;
}

- (id)initWithPath:(id)arg1;
- (void)deleteStore;
- (id)currentSearchMetadata;
- (void)updateSearchMetadataTo:(id)arg1;

@end
