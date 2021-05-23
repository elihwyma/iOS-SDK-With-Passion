/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPTPConversionResult : NSObject

{
    NSString *_pathExtension;
    unsigned long long _estimatedFileLength;
}

@property (copy, readonly) NSString *pathExtension;
@property (readonly) unsigned long long estimatedFileLength;

- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;

@end
