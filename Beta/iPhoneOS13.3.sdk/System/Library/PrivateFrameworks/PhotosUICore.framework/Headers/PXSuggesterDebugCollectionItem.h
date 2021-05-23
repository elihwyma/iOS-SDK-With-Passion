/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, PHSuggestion;

@interface PXSuggesterDebugCollectionItem : NSObject

{
    NSString *_name;
    NSString *_description;
    NSDictionary *_info;
    PHSuggestion *_suggestion;
    NSDate *_date;
}

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *info;
@property (readonly) PHSuggestion *suggestion;
@property (readonly) NSDate *date;
@property (readonly) _Bool isInvalid;

- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;

@end
