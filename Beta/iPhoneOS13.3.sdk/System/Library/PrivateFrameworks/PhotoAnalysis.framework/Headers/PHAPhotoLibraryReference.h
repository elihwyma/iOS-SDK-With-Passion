/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHAPhotoLibraryReference : NSObject

{
    NSString *_path;
}

@property (copy, readonly) NSString *path;

- (id)init;
- (id)dictionaryRepresentation;
- (id)initWithLibraryURL:(id)arg1;
- (_Bool)isEqualToPhotoLibraryReference:(id)arg1;

@end
