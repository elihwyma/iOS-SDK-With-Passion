/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaEntityIdentifier : NSObject

{
    NSManagedObjectID *_managedObjectID;
    VUIMediaEntityType *_mediaEntityType;
}

@property (retain, nonatomic) NSManagedObjectID *managedObjectID;
@property (copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2;

@end
