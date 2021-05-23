/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

#import <VideosUI/Swift-Protocol.h>

@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <Swift>

{
    NSOrderedSet *_cast;
    NSOrderedSet *_directors;
    NSOrderedSet *_producers;
    NSOrderedSet *_screenwriters;
}

@property (copy, nonatomic) NSOrderedSet *cast;
@property (copy, nonatomic) NSOrderedSet *directors;
@property (copy, nonatomic) NSOrderedSet *producers;
@property (copy, nonatomic) NSOrderedSet *screenwriters;
@property (nonatomic, readonly) _Bool hasCredits;

+ (id)_arrayFromStringRepresentation:(id)arg1;
+ (id)_stringRepresentationFromArray:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;

@end
