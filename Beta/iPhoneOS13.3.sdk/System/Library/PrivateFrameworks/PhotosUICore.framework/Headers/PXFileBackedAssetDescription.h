/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PXFileBackedAssetDescription : NSObject

{
    NSMutableDictionary *_descriptionDictionary;
    NSURL *_url;
}

@property (copy, nonatomic, readonly) NSURL *url;

+ (id)simpleImageDescriptionWithURL:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
