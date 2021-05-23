/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <ITMLKit/IKJSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIJSMediaEntityType : IKJSObject

{
    NSString *_subtype;
    NSString *_category;
    NSString *_collectionType;
}

@property (retain, nonatomic) NSString *subtype;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *collectionType;

+ (id)show;
+ (id)movie;
+ (id)season;
+ (id)episode;
+ (id)rental;
+ (id)homeVideo;

- (id)description;
- (id)initWithAppContext:(id)arg1;
- (id)initWithMediaEntitySubtype:(id)arg1 category:(id)arg2 collectionType:(id)arg3 appContext:(id)arg4;

@end
