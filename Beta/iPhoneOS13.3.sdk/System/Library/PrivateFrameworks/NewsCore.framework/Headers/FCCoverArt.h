/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface FCCoverArt : NSObject

{
    NSArray *_images;
}

@property (nonatomic, readonly) NSArray *images;

- (id)initWithJSONString:(id)arg1;
- (id)initWithJSONData:(id)arg1;

@end
