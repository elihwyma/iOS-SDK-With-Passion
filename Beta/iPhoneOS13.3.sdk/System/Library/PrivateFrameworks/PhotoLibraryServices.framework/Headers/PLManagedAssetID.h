/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLManagedAssetID : NSObject

{
    unsigned char _bundleScope;
    NSString *_uuid;
    NSString *_filename;
    NSString *_directory;
    NSString *_libraryID;
}

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *directory;
@property (copy, nonatomic) NSString *libraryID;
@property (nonatomic) unsigned char bundleScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithManagedAsset:(id)arg1;
- (id)initWithUUID:(id)arg1 filename:(id)arg2 directory:(id)arg3 libraryID:(id)arg4 bundleScope:(unsigned char)arg5;

@end
