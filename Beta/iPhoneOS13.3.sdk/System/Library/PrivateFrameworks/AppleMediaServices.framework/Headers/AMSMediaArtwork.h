/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AMSMediaArtwork : NSObject

{
    NSDictionary *_artworkDictionary;
}

@property (nonatomic, readonly) NSDictionary *artworkDictionary;
@property (nonatomic, readonly) struct CGSize artworkSize;

- (id)initWithDictionary:(id)arg1;
- (double)width;
- (double)height;
- (id)URLString;
- (id)URLWithSize:(struct CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3;
- (struct CGColor *)colorWithKind:(id)arg1;
- (id)URLWithSize:(struct CGSize)arg1;

@end
