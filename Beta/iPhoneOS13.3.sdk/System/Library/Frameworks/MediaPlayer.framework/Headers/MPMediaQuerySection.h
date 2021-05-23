/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSString;

@interface MPMediaQuerySection : NSObject <Swift>

{
    NSString *_title;
    unsigned long long _sectionIndexTitleIndex;
    struct _NSRange _range;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned long long sectionIndexTitleIndex;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

@end
