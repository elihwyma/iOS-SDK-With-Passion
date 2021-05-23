/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADMovie.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface OADLinkedMediaFile : OADMovie

{
    NSURL *mUrl;
    _Bool mIsExternal;
}

@property (retain) NSURL *url;
@property _Bool isExternal;

@end
