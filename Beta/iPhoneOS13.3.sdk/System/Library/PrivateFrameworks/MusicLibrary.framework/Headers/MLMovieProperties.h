/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface MLMovieProperties : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSArray *castMembers;
@property (copy, nonatomic) NSString *copyrightWarning;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *producers;
@property (copy, nonatomic) NSArray *screenwriters;
@property (copy, nonatomic) NSString *studioName;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithMoviePropertiesDictionary:(id)arg1;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)copyMoviePropertiesDictionary;

@end
