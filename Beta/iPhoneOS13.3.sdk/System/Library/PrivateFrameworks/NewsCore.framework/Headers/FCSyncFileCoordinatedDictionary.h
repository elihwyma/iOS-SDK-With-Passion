/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSURL;

@interface FCSyncFileCoordinatedDictionary : NSObject

{
    NSURL *_fileURL;
    NSSet *_allowedClasses;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSSet *allowedClasses;

- (id)init;
- (id)read;
- (_Bool)writeWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;

@end
