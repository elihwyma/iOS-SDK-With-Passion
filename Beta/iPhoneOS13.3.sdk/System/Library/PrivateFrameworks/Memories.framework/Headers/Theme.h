/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface Theme : NSObject

{
    NSString *m_themeID;
}

@property (nonatomic, readonly) NSString *themeID;
@property (nonatomic, readonly) NSString *trailerID;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) NSString *displayName;

+ (_Bool)themeIDIsTrailer:(id)arg1;
+ (id)themeWithID:(id)arg1;
+ (id)trailerIDFromThemeID:(id)arg1;
+ (id)themeIDs;
+ (id)themeIDFromTrailerID:(id)arg1;

- (id)posterImage;
- (id)musicName;
- (id)micaFileBaseName;
- (id)micaFileNameForTitleNamed:(id)arg1;
- (id)initWithThemeID:(id)arg1;
- (id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2;
- (id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2;
- (id)displayNameForTransitionName:(id)arg1;

@end
