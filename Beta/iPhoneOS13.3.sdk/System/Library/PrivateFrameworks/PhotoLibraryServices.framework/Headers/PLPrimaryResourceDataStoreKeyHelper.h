/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPrimaryResourceDataStoreKeyHelper : NSObject

{
    char *originalsBaseData;
    char *rendersBaseData;
    char *derivativesBaseData;
    char *masterThumbsBaseData;
    char *masterThumbFilenameData;
    char *bundleBaseData;
}

- (void)dealloc;
- (id)initWithPathManager:(id)arg1;

@end
