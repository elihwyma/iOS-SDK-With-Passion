/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TVPMediaItemAdvisoryInfo : NSObject

{
    NSString *_ratingName;
    NSString *_ratingDescription;
}

@property (retain, nonatomic) NSString *ratingName;
@property (nonatomic, readonly) NSString *ratingDescription;

- (id)description;
- (id)initWithRatingDescription:(id)arg1;

@end
