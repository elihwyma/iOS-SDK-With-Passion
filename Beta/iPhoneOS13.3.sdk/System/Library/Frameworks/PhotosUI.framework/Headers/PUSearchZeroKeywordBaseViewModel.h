/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PUSearchZeroKeywordBaseViewModel : NSObject

{
    long long _itemType;
    NSString *_title;
    id _representedObject;
    id _displayInfo;
}

@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic, readonly) id displayInfo;
@property (nonatomic, readonly) NSDictionary *debugDictionary;

- (id)description;
- (id)initForTesting;
- (id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 displayInfo:(id)arg4;

@end
