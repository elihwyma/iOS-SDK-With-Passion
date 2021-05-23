/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, _PXSettingsIndexEntry;

@interface PXSettingsSearchResult : NSObject

{
    _PXSettingsIndexEntry *_entry;
}

@property (nonatomic, readonly) _PXSettingsIndexEntry *entry;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (void)revealInSettingsController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithEntry:(id)arg1;

@end
