/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject

{
    NSMutableDictionary *_itemTypeCache;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain) NSMutableDictionary *itemTypeCache;

+ (id)sharedCache;
+ (id)_iWorkUTIs;

- (id)init;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (_Bool)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2;
- (_Bool)_contentTypeIsIWorkType:(id)arg1;
- (unsigned long long)itemTypeForContentType:(id)arg1;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1;
- (_Bool)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2;

@end
