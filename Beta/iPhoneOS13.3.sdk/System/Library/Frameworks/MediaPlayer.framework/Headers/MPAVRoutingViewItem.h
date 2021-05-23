/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, NSString, UIImage;

@interface MPAVRoutingViewItem : NSObject

{
    _Bool _enabled;
    NSString *_localizedTitle;
    long long _type;
    MPAVRoute *_route;
    NSString *_localizedSubtitle;
    UIImage *_image;
    NSString *_actionIdentifier;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) MPAVRoute *route;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) _Bool enabled;
@property (nonatomic, readonly) UIImage *image;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)itemWithRoute:(id)arg1;
+ (id)itemWithActionTitle:(id)arg1 subtitle:(id)arg2 enabled:(_Bool)arg3 identifier:(id)arg4 image:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (id)_stateDumpObject;

@end
