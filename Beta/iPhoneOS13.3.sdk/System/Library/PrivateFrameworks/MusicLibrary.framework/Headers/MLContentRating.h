/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLContentRating : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *ratingSystem;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithStringRepresentation:(id)arg1;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)initWithContentRatingDictionary:(id)arg1;
- (id)copyStringRepresentation;

@end
