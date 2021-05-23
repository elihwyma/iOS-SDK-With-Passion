/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject

{
    NSDictionary *_artworkDictionary;
}

@property (nonatomic, readonly) NSDictionary *artworkDictionary;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) double width;

- (id)colorWithKind:(id)arg1;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;

@end
