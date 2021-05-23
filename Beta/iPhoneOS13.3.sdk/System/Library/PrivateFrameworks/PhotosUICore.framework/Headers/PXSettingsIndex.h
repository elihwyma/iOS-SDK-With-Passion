/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PXSettingsIndex : NSObject

{
    NSArray *_entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (id)createIndexForSettings:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)_entriesForSettingsController:(id)arg1 usingProgress:(id)arg2;

- (id)init;
- (id)_initWithEntries:(id)arg1;
- (id)searchForText:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end
