/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityGroup : NSObject <Swift>

{
    NSObject<NSCopying> *_identifier;
    NSArray *_mediaEntities;
    NSArray *_sortIndexes;
}

@property (copy, nonatomic) NSObject<NSCopying> *identifier;
@property (copy, nonatomic) NSArray *mediaEntities;
@property (copy, nonatomic) NSArray *sortIndexes;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
