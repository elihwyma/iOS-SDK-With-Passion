/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLLegacyChangeEvent : NSObject

+ (id)localChangeEventFromChangeHubEvent:(id)arg1 withPhotoLibrary:(id)arg2;
+ (id)_descriptionForEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1 withPhotoLibrary:(id)arg2;
+ (_Bool)isEmptyEvent:(id)arg1;

@end
