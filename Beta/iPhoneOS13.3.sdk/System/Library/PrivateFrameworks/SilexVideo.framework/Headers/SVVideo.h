/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVVideo : NSObject

{
    _Bool _allowsCallToActionBar;
    unsigned long long _videoType;
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long videoType;
@property (nonatomic, readonly) _Bool allowsCallToActionBar;

- (id)initWithVideoType:(unsigned long long)arg1;

@end
