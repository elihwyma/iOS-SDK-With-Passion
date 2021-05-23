/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject

{
    MPModelObject *_model;
    long long _personalizationStyle;
}

@property (nonatomic, readonly) MPModelObject *model;
@property (nonatomic, readonly) long long personalizationStyle;

+ (id)lightweightPersonalizationPropertiesForModelClass:(Class)arg1;
+ (id)_lightweightPersonalizationPropertiesForPlaybackPosition;
+ (id)_lightweightPersonalizationPropertiesForStoreAsset;

- (id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2;

@end
