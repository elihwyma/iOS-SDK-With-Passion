/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VUIMediaCategory : NSObject

{
    unsigned long long _type;
    NSSet *_supportedMediaCollectionTypes;
    NSDictionary *_supportedChildMediaCollectionTypes;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSSet *supportedMediaCollectionTypes;
@property (copy, nonatomic) NSDictionary *supportedChildMediaCollectionTypes;

+ (id)mediaCatgeoryForType:(unsigned long long)arg1;

- (id)init;
- (id)description;
- (id)_initWithType:(unsigned long long)arg1;

@end
