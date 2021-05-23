/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PXSuggestersDebugCollectionItem : NSObject

{
    NSString *_name;
    NSString *_description;
    NSDictionary *_info;
}

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *info;

- (id)initWithSuggesterInfo:(id)arg1;

@end
