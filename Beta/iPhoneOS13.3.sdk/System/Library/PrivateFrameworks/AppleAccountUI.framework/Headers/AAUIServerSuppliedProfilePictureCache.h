/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject

{
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

@property (nonatomic, readonly) double pictureDiameter;

+ (id)sharedCache;

- (id)init;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1;
- (id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(CDUnknownBlockType)arg3;
- (void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)updateProfilePicture:(id)arg1 didReceiveNewPicture:(_Bool)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4;

@end
