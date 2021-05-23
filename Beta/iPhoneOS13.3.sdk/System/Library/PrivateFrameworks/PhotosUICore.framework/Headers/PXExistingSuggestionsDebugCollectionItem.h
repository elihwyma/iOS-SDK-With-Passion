/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHSuggestion;

@interface PXExistingSuggestionsDebugCollectionItem : NSObject

{
    NSString *_name;
    NSString *_description;
    PHSuggestion *_suggestion;
}

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) PHSuggestion *suggestion;

- (id)initWithSuggestion:(id)arg1;

@end
