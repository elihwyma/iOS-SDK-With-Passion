/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupItemArtwork : NSObject

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;

+ (id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2;

- (id)initWithDictionary:(id)arg1;
- (id)colors;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;

@end
