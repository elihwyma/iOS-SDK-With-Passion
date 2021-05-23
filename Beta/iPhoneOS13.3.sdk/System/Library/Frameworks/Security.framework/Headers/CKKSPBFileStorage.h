/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol CKKSPBCodable;

__attribute__((visibility("hidden")))
@interface CKKSPBFileStorage : NSObject

{
    NSURL *_storageFile;
    Class _storageClass;
    id <CKKSPBCodable> _protobufStorage;
}

@property (retain) NSURL *storageFile;
@property (retain) Class storageClass;
@property (retain) id <CKKSPBCodable> protobufStorage;

- (id)storage;
- (id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2;
- (void)setStorage:(id)arg1;

@end
