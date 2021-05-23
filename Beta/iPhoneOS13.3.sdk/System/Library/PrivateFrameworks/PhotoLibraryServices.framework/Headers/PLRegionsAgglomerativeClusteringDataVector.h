/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLRegionsAgglomerativeClusteringDataVector : NSObject

{
    double *_data;
    unsigned long long _length;
    id _userInfo;
}

@property (readonly) double *data;
@property (readonly) unsigned long long length;
@property (retain) id userInfo;

- (void)dealloc;
- (id)initWithDataLength:(unsigned long long)arg1;

@end
