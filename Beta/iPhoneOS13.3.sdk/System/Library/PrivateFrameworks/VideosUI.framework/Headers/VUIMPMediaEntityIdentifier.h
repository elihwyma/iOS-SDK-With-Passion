/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityIdentifier : NSObject

{
    NSNumber *_persistentID;
    VUIMediaEntityType *_mediaEntityType;
}

@property (copy, nonatomic) NSNumber *persistentID;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)showIdentifierWithMediaItem:(id)arg1;
+ (id)mediaItemIdentifierWithMediaItem:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;

@end
