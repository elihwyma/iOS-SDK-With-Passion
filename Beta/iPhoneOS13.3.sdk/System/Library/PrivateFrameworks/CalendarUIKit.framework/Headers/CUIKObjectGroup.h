/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface CUIKObjectGroup : NSObject

{
    NSDictionary *_originalObjectMap;
    NSMutableDictionary *_objectMap;
    CalDefaultDictionary *_spawnedObjectIdentifiers;
}

@property (retain) NSDictionary *originalObjectMap;
@property (retain) NSMutableDictionary *objectMap;
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers;

@end
