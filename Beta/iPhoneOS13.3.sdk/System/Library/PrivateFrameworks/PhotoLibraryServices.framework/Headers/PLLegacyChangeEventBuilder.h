/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLLegacyChangeEventBuilder : NSObject

+ (id)createXPCDictionaryFromChangedObjectIDs:(id)arg1 redundantDeletes:(id)arg2 uuidsForCloudDeletion:(id)arg3 updatedAttributesByObjectID:(id)arg4 updatedRelationshipsByObjectID:(id)arg5 updatedOrderKeys:(id)arg6 changeSource:(int)arg7 syncChangeMarker:(_Bool)arg8;

@end
