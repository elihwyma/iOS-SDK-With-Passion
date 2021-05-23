/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSURL;

@interface _PHVariationInMemoryCachedValue : NSObject

{
    NSDictionary *_info;
    NSURL *_fileURL;
    NSDate *_expectedDate;
}

@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDate *expectedDate;
@property (nonatomic, readonly) _Bool isValid;

- (id)initWithInfo:(id)arg1 fileURL:(id)arg2;
- (id)_currentFileModificationDate;

@end
