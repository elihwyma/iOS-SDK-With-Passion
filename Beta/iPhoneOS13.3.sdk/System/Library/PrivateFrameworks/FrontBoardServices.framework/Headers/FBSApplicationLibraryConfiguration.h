/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@interface FBSApplicationLibraryConfiguration : NSObject

{
    Class _applicationInfoClass;
    Class _applicationPlaceholderClass;
    _Bool _allowConcurrentLoading;
    CDUnknownBlockType _installedApplicationFilter;
    CDUnknownBlockType _placeholderFilter;
}

@property (retain, nonatomic) Class applicationInfoClass;
@property (retain, nonatomic) Class applicationPlaceholderClass;
@property (nonatomic) _Bool allowConcurrentLoading;
@property (copy, nonatomic) CDUnknownBlockType installedApplicationFilter;
@property (copy, nonatomic) CDUnknownBlockType placeholderFilter;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
